import React, { useState, useEffect } from 'react';
import { motion } from 'framer-motion';
import { Prism as SyntaxHighlighter } from 'react-syntax-highlighter';
import { atomDark } from 'react-syntax-highlighter/dist/esm/styles/prism';
import { FaTimes, FaExpand, FaCompress, FaMinus, FaFile, FaCopy, FaSpinner } from 'react-icons/fa';
import { loadFileContent } from '../utils/fileSystem';
import './FileViewer.css';

const getLanguage = (filename) => {
  const extension = filename.split('.').pop().toLowerCase();
  const languageMap = {
    'cpp': 'cpp',
    'py': 'python',
    'js': 'javascript',
    'java': 'java',
    'c': 'c',
    'md': 'markdown'
  };
  return languageMap[extension] || 'text';
};

const FileViewer = ({ file, onClose, windowSize, onToggleWindow }) => {
  const [content, setContent] = useState('');
  const [loading, setLoading] = useState(true);
  const [copied, setCopied] = useState(false);

  useEffect(() => {
    const loadContent = async () => {
      setLoading(true);
      try {
        const fileContent = await loadFileContent(file.path || `/${file.name}`);
        setContent(fileContent);
      } catch (error) {
        console.error('Error loading file:', error);
        setContent('// Error loading file content');
      } finally {
        setLoading(false);
      }
    };

    loadContent();
  }, [file]);

  const handleCopy = async () => {
    try {
      await navigator.clipboard.writeText(content);
      setCopied(true);
      setTimeout(() => setCopied(false), 2000);
    } catch (err) {
      console.error('Failed to copy: ', err);
    }
  };

  const getWindowIcon = () => {
    switch (windowSize) {
      case 'maximized':
        return <FaCompress />;
      case 'minimized':
        return <FaExpand />;
      default:
        return <FaMinus />;
    }
  };

  return (
    <motion.div 
      className={`file-viewer ${windowSize}`}
      initial={{ opacity: 0, scale: 0.95 }}
      animate={{ opacity: 1, scale: 1 }}
      exit={{ opacity: 0, scale: 0.95 }}
      transition={{ duration: 0.3 }}
    >
      <div className="viewer-header">
        <div className="file-info">
          <FaFile className="file-icon" />
          <span className="file-name">{file.name}</span>
          <span className="file-language">{getLanguage(file.name)}</span>
        </div>
        
        <div className="viewer-controls">
          <motion.button
            className="control-btn copy-btn"
            onClick={handleCopy}
            whileHover={{ scale: 1.1 }}
            whileTap={{ scale: 0.9 }}
            title="Copy content"
          >
            <FaCopy />
          </motion.button>
          
          <motion.button
            className="control-btn"
            onClick={onToggleWindow}
            whileHover={{ scale: 1.1 }}
            whileTap={{ scale: 0.9 }}
            title={windowSize === 'maximized' ? 'Restore' : 'Maximize'}
          >
            {getWindowIcon()}
          </motion.button>
          
          <motion.button
            className="control-btn close-btn"
            onClick={onClose}
            whileHover={{ scale: 1.1 }}
            whileTap={{ scale: 0.9 }}
            title="Close"
          >
            <FaTimes />
          </motion.button>
        </div>
      </div>

      {copied && (
        <motion.div
          className="copy-notification"
          initial={{ opacity: 0, y: -20 }}
          animate={{ opacity: 1, y: 0 }}
          exit={{ opacity: 0, y: -20 }}
        >
          Content copied to clipboard!
        </motion.div>
      )}

      <div className="viewer-content">
        {loading ? (
          <div className="loading-content">
            <motion.div
              animate={{ rotate: 360 }}
              transition={{ duration: 1, repeat: Infinity, ease: "linear" }}
            >
              <FaSpinner />
            </motion.div>
            <p>Loading {file.name}...</p>
          </div>
        ) : (
          <SyntaxHighlighter
            language={getLanguage(file.name)}
            style={atomDark}
            customStyle={{
              margin: 0,
              padding: '20px',
              background: 'rgba(0, 0, 0, 0.4)',
              borderRadius: '0 0 15px 15px',
              fontSize: '14px',
              lineHeight: '1.5'
            }}
            showLineNumbers={true}
            wrapLines={true}
          >
            {content}
          </SyntaxHighlighter>
        )}
      </div>
    </motion.div>
  );
};

export default FileViewer;
