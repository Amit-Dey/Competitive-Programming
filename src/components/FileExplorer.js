import React, { useState, useMemo } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { FaFolder, FaFolderOpen, FaFile, FaChevronRight, FaSearch, FaTimes, FaSync } from 'react-icons/fa';
import './FileExplorer.css';

const getFileIcon = (filename) => {
  const extension = filename.split('.').pop().toLowerCase();
  return <FaFile className={`file-icon ${extension}`} />;
};

const FileItem = ({ item, onFileSelect, level = 0, expandedFolders, setExpandedFolders }) => {
  const hasChildren = item.children && item.children.length > 0;
  const isExpanded = expandedFolders?.has(item.name) || false;

  const handleClick = () => {
    if (item.type === 'folder') {
      const newExpanded = new Set(expandedFolders);
      if (isExpanded) {
        newExpanded.delete(item.name);
      } else {
        newExpanded.add(item.name);
      }
      setExpandedFolders(newExpanded);
    } else {
      onFileSelect(item);
    }
  };

  return (
    <motion.div 
      className="file-item"
      initial={{ opacity: 0, x: -20 }}
      animate={{ opacity: 1, x: 0 }}
      transition={{ duration: 0.3, delay: level * 0.1 }}
    >
      <motion.div
        className={`file-item-header ${item.type}`}
        onClick={handleClick}
        style={{ paddingLeft: `${level * 20}px` }}
        whileHover={{ backgroundColor: 'rgba(255, 255, 255, 0.1)' }}
        whileTap={{ scale: 0.98 }}
      >
        {item.type === 'folder' && (
          <motion.span
            className="expand-icon"
            animate={{ rotate: isExpanded ? 90 : 0 }}
            transition={{ duration: 0.2 }}
          >
            <FaChevronRight />
          </motion.span>
        )}
        
        <span className="item-icon">
          {item.type === 'folder' ? (
            isExpanded ? <FaFolderOpen className="folder-icon open" /> : <FaFolder className="folder-icon" />
          ) : (
            getFileIcon(item.name)
          )}
        </span>
        
        <span className="item-name">{item.name}</span>
      </motion.div>

      <AnimatePresence>
        {item.type === 'folder' && isExpanded && hasChildren && (
          <motion.div
            className="file-item-children"
            initial={{ opacity: 0, height: 0 }}
            animate={{ opacity: 1, height: 'auto' }}
            exit={{ opacity: 0, height: 0 }}
            transition={{ duration: 0.3 }}
          >
            {item.children.map((child, index) => (
              <FileItem
                key={`${child.name}-${index}`}
                item={child}
                onFileSelect={onFileSelect}
                level={level + 1}
                expandedFolders={expandedFolders}
                setExpandedFolders={setExpandedFolders}
              />
            ))}
          </motion.div>
        )}
      </AnimatePresence>
    </motion.div>
  );
};

const FileExplorer = ({ fileStructure, onFileSelect, onRefresh }) => {
  const [searchTerm, setSearchTerm] = useState('');
  const [expandedFolders, setExpandedFolders] = useState(new Set(['Competitive-Programming']));

  // Filter files based on search term
  const filteredStructure = useMemo(() => {
    if (!searchTerm) return fileStructure;

    const filterNode = (node) => {
      const matchesSearch = node.name.toLowerCase().includes(searchTerm.toLowerCase());
      
      if (node.type === 'file') {
        return matchesSearch ? node : null;
      }

      const filteredChildren = node.children
        ?.map(filterNode)
        .filter(Boolean) || [];

      if (matchesSearch || filteredChildren.length > 0) {
        return {
          ...node,
          children: filteredChildren
        };
      }

      return null;
    };

    return filterNode(fileStructure);
  }, [fileStructure, searchTerm]);

  // Auto-expand folders when searching
  React.useEffect(() => {
    if (searchTerm) {
      const expandAllFolders = (node, expanded = new Set()) => {
        if (node.type === 'folder') {
          expanded.add(node.name);
          node.children?.forEach(child => expandAllFolders(child, expanded));
        }
        return expanded;
      };
      setExpandedFolders(expandAllFolders(filteredStructure || fileStructure));
    }
  }, [searchTerm, filteredStructure, fileStructure]);

  const clearSearch = () => {
    setSearchTerm('');
  };

  return (
    <motion.div 
      className="file-explorer"
      initial={{ opacity: 0, scale: 0.95 }}
      animate={{ opacity: 1, scale: 1 }}
      transition={{ duration: 0.5 }}
    >
      <div className="explorer-header">
        <div className="header-title">
          <h3>File Explorer</h3>
          {onRefresh && (
            <motion.button
              className="refresh-btn"
              onClick={onRefresh}
              whileHover={{ scale: 1.1, rotate: 180 }}
              whileTap={{ scale: 0.9 }}
              title="Refresh files"
            >
              <FaSync />
            </motion.button>
          )}
        </div>
        <div className="search-container">
          <div className="search-input-wrapper">
            <FaSearch className="search-icon" />
            <input
              type="text"
              placeholder="Search files..."
              value={searchTerm}
              onChange={(e) => setSearchTerm(e.target.value)}
              className="search-input"
            />
            {searchTerm && (
              <motion.button
                className="clear-search"
                onClick={clearSearch}
                whileHover={{ scale: 1.1 }}
                whileTap={{ scale: 0.9 }}
              >
                <FaTimes />
              </motion.button>
            )}
          </div>
        </div>
      </div>
      
      <div className="explorer-content">
        {filteredStructure ? (
          <FileItem 
            item={filteredStructure} 
            onFileSelect={onFileSelect}
            expandedFolders={expandedFolders}
            setExpandedFolders={setExpandedFolders}
          />
        ) : (
          <div className="no-results">
            <p>No files found matching "{searchTerm}"</p>
          </div>
        )}
      </div>
    </motion.div>
  );
};

export default FileExplorer;
