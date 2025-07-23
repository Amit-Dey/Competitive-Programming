import React, { useState, useEffect } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import Header from './components/Header';
import FileExplorer from './components/FileExplorer';
import FileViewer from './components/FileViewer';
import { useFileSystem } from './utils/fileSystem';
import './App.css';

function App() {
  const [selectedFile, setSelectedFile] = useState(null);
  const [windowSize, setWindowSize] = useState('normal'); // normal, minimized, maximized
  const { fileStructure, loading, error, refreshFileStructure } = useFileSystem();

  const handleFileSelect = (file) => {
    setSelectedFile(file);
  };

  const toggleWindow = () => {
    if (windowSize === 'normal') {
      setWindowSize('maximized');
    } else if (windowSize === 'maximized') {
      setWindowSize('minimized');
    } else {
      setWindowSize('normal');
    }
  };

  const closeFile = () => {
    setSelectedFile(null);
  };

  if (loading) {
    return (
      <div className="App">
        <div className="loading-screen">
          <motion.div
            className="loading-spinner"
            animate={{ rotate: 360 }}
            transition={{ duration: 1, repeat: Infinity, ease: "linear" }}
          >
            ⚡
          </motion.div>
          <p>Loading Competitive Programming Files...</p>
        </div>
      </div>
    );
  }

  return (
    <div className="App">
      <Header />
      
      <motion.div 
        className={`main-container ${windowSize}`}
        initial={{ opacity: 0, y: 20 }}
        animate={{ opacity: 1, y: 0 }}
        transition={{ duration: 0.6 }}
      >
        <div className="explorer-section">
          <FileExplorer 
            fileStructure={fileStructure} 
            onFileSelect={handleFileSelect}
            onRefresh={refreshFileStructure}
          />
        </div>

        <AnimatePresence>
          {selectedFile && (
            <motion.div
              className="viewer-section"
              initial={{ opacity: 0, x: 300 }}
              animate={{ opacity: 1, x: 0 }}
              exit={{ opacity: 0, x: 300 }}
              transition={{ duration: 0.3 }}
            >
              <FileViewer 
                file={selectedFile}
                onClose={closeFile}
                windowSize={windowSize}
                onToggleWindow={toggleWindow}
              />
            </motion.div>
          )}
        </AnimatePresence>
      </motion.div>
    </div>
  );
}

export default App;
