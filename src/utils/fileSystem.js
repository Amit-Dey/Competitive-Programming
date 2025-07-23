import { useState, useEffect, useCallback } from 'react';

const API_BASE_URL = 'http://localhost:3001/api';

// Hook for managing file system state
export const useFileSystem = () => {
  const [fileStructure, setFileStructure] = useState(null);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  const fetchFileStructure = useCallback(async () => {
    try {
      setLoading(true);
      setError(null);
      
      const response = await fetch(`${API_BASE_URL}/files`);
      if (!response.ok) {
        throw new Error(`HTTP error! status: ${response.status}`);
      }
      
      const data = await response.json();
      setFileStructure(data);
    } catch (err) {
      console.error('Error fetching file structure:', err);
      setError(err.message);
      
      // Fallback to static structure if API fails
      setFileStructure({
        name: "Competitive-Programming",
        type: "folder",
        path: "/",
        children: [
          {
            name: "AtCoder",
            type: "folder",
            path: "/AtCoder",
            children: []
          },
          {
            name: "Codeforces",
            type: "folder", 
            path: "/Codeforces",
            children: []
          },
          {
            name: "LeetCode",
            type: "folder",
            path: "/LeetCode", 
            children: []
          }
        ]
      });
    } finally {
      setLoading(false);
    }
  }, []);

  const refreshFileStructure = useCallback(() => {
    fetchFileStructure();
  }, [fetchFileStructure]);

  useEffect(() => {
    fetchFileStructure();
  }, [fetchFileStructure]);

  return {
    fileStructure,
    loading,
    error,
    refreshFileStructure
  };
};

// Function to load file content
export const loadFileContent = async (filePath) => {
  try {
    const encodedPath = encodeURIComponent(filePath);
    const response = await fetch(`${API_BASE_URL}/files/content?path=${encodedPath}`);

    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }

    const data = await response.json();
    return data.content;
  } catch (error) {
    console.error('Error loading file content:', error);
    throw error;
  }
};

// Function to search files
export const searchFiles = (fileStructure, searchTerm) => {
  if (!fileStructure || !searchTerm) return [];
  
  const results = [];
  
  const searchRecursive = (node, path = '') => {
    const currentPath = path + '/' + node.name;
    
    if (node.name.toLowerCase().includes(searchTerm.toLowerCase())) {
      results.push({
        ...node,
        path: currentPath
      });
    }
    
    if (node.children) {
      node.children.forEach(child => searchRecursive(child, currentPath));
    }
  };
  
  searchRecursive(fileStructure);
  return results;
};
