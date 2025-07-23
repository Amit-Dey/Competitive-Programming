const express = require('express');
const fs = require('fs').promises;
const path = require('path');
const cors = require('cors');
const chokidar = require('chokidar');

const app = express();
const PORT = process.env.PORT || 3001;

// Enable CORS for React app
app.use(cors({
  origin: 'http://localhost:3000',
  credentials: true
}));

app.use(express.json());

// Base directory for competitive programming files
const BASE_DIR = __dirname;

// Excluded directories and files
const EXCLUDED_DIRS = [
  'node_modules',
  '.git',
  'build',
  'dist',
  '.vscode',
  'public',
  'src',
  '.next',
  'coverage'
];

const EXCLUDED_FILES = [
  'package.json',
  'package-lock.json',
  'README.md',
  'index.html',
  '.gitignore',
  'server.js',
  '.env'
];

// Function to get file language based on extension
function getFileLanguage(filename) {
  const ext = path.extname(filename).toLowerCase();
  const languageMap = {
    '.cpp': 'cpp',
    '.c': 'c',
    '.py': 'python',
    '.js': 'javascript',
    '.java': 'java',
    '.go': 'go',
    '.rs': 'rust',
    '.php': 'php',
    '.rb': 'ruby',
    '.swift': 'swift',
    '.kt': 'kotlin',
    '.scala': 'scala',
    '.md': 'markdown',
    '.txt': 'text',
    '.json': 'json',
    '.xml': 'xml',
    '.yaml': 'yaml',
    '.yml': 'yaml'
  };
  return languageMap[ext] || 'text';
}

// Function to check if a path should be excluded
function shouldExclude(itemName, isDirectory) {
  if (isDirectory) {
    return EXCLUDED_DIRS.includes(itemName) || itemName.startsWith('.');
  }
  return EXCLUDED_FILES.includes(itemName) || itemName.startsWith('.');
}

// Recursive function to build file structure
async function buildFileStructure(dirPath, relativePath = '') {
  try {
    const items = await fs.readdir(dirPath);
    const children = [];

    for (const item of items) {
      const fullPath = path.join(dirPath, item);
      const itemRelativePath = path.join(relativePath, item);
      
      try {
        const stats = await fs.stat(fullPath);
        
        if (shouldExclude(item, stats.isDirectory())) {
          continue;
        }

        if (stats.isDirectory()) {
          const childStructure = await buildFileStructure(fullPath, itemRelativePath);
          if (childStructure.children.length > 0 || item === 'General') {
            children.push(childStructure);
          }
        } else if (stats.isFile()) {
          children.push({
            name: item,
            type: 'file',
            path: '/' + itemRelativePath.replace(/\\/g, '/'),
            language: getFileLanguage(item),
            size: stats.size,
            modified: stats.mtime.toISOString()
          });
        }
      } catch (error) {
        console.warn(`Error processing ${fullPath}:`, error.message);
        continue;
      }
    }

    // Sort children: folders first, then files, both alphabetically
    children.sort((a, b) => {
      if (a.type === b.type) {
        return a.name.localeCompare(b.name);
      }
      return a.type === 'folder' ? -1 : 1;
    });

    return {
      name: path.basename(dirPath),
      type: 'folder',
      path: '/' + relativePath.replace(/\\/g, '/'),
      children: children,
      modified: (await fs.stat(dirPath)).mtime.toISOString()
    };
  } catch (error) {
    console.error(`Error reading directory ${dirPath}:`, error);
    return {
      name: path.basename(dirPath),
      type: 'folder',
      path: '/' + relativePath.replace(/\\/g, '/'),
      children: [],
      error: error.message
    };
  }
}

// Cache for file structure
let fileStructureCache = null;
let lastScanTime = 0;
const CACHE_DURATION = 5000; // 5 seconds

// Function to get fresh file structure
async function getFileStructure(forceRefresh = false) {
  const now = Date.now();
  
  if (!forceRefresh && fileStructureCache && (now - lastScanTime) < CACHE_DURATION) {
    return fileStructureCache;
  }

  console.log('Scanning file system...');
  fileStructureCache = await buildFileStructure(BASE_DIR);
  lastScanTime = now;
  
  return fileStructureCache;
}

// API Routes

// Get file structure
app.get('/api/files', async (req, res) => {
  try {
    const forceRefresh = req.query.refresh === 'true';
    const structure = await getFileStructure(forceRefresh);
    res.json(structure);
  } catch (error) {
    console.error('Error getting file structure:', error);
    res.status(500).json({ error: 'Failed to read file structure' });
  }
});

// Get file content
app.get('/api/files/content', async (req, res) => {
  try {
    const filePath = req.query.path;
    if (!filePath) {
      return res.status(400).json({ error: 'File path is required' });
    }

    // Security check: ensure path is within base directory
    const fullPath = path.join(BASE_DIR, filePath);
    const resolvedPath = path.resolve(fullPath);
    const resolvedBase = path.resolve(BASE_DIR);
    
    if (!resolvedPath.startsWith(resolvedBase)) {
      return res.status(403).json({ error: 'Access denied' });
    }

    const content = await fs.readFile(resolvedPath, 'utf8');
    const stats = await fs.stat(resolvedPath);
    
    res.json({
      content,
      size: stats.size,
      modified: stats.mtime.toISOString(),
      path: filePath
    });
  } catch (error) {
    console.error('Error reading file:', error);
    if (error.code === 'ENOENT') {
      res.status(404).json({ error: 'File not found' });
    } else if (error.code === 'EISDIR') {
      res.status(400).json({ error: 'Path is a directory, not a file' });
    } else {
      res.status(500).json({ error: 'Failed to read file' });
    }
  }
});

// Search files
app.get('/api/search', async (req, res) => {
  try {
    const query = req.query.q;
    if (!query) {
      return res.status(400).json({ error: 'Search query is required' });
    }

    const structure = await getFileStructure();
    const results = [];

    function searchInStructure(node, searchTerm) {
      const lowerQuery = searchTerm.toLowerCase();
      
      if (node.name.toLowerCase().includes(lowerQuery)) {
        results.push({
          ...node,
          matchType: 'filename'
        });
      }

      if (node.type === 'folder' && node.children) {
        node.children.forEach(child => searchInStructure(child, searchTerm));
      }
    }

    searchInStructure(structure, query);
    
    res.json({
      query,
      results: results.slice(0, 50) // Limit results
    });
  } catch (error) {
    console.error('Error searching files:', error);
    res.status(500).json({ error: 'Search failed' });
  }
});

// WebSocket for real-time file changes (optional enhancement)
const http = require('http');
const server = http.createServer(app);

// File watcher for real-time updates
const watcher = chokidar.watch(BASE_DIR, {
  ignored: [
    '**/node_modules/**',
    '**/.git/**',
    '**/build/**',
    '**/dist/**',
    '**/.next/**',
    '**/coverage/**'
  ],
  persistent: true,
  ignoreInitial: true
});

watcher.on('all', (event, path) => {
  console.log(`File ${event}: ${path}`);
  // Invalidate cache when files change
  fileStructureCache = null;
});

server.listen(PORT, () => {
  console.log(`🚀 File system server running on http://localhost:${PORT}`);
  console.log(`📁 Watching directory: ${BASE_DIR}`);
});

// Graceful shutdown
process.on('SIGINT', () => {
  console.log('\n👋 Shutting down server...');
  watcher.close();
  server.close(() => {
    console.log('✅ Server closed');
    process.exit(0);
  });
});
