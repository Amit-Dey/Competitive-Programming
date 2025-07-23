# 🏆 Competitive Programming Explorer

A dynamic, interactive React-based file viewer for competitive programming solutions! This repository contains a comprehensive catalog of competitive programming practice with solutions from Codeforces, AtCoder, CodeChef, LeetCode, and other platforms, primarily written in C++ with some Python solutions.

**✨ New Features:**
- 🚀 **Interactive Web Interface** - Modern React-based file explorer
- 🎨 **Beautiful Animations** - Smooth transitions and micro-interactions using Framer Motion
- 🔍 **Real-time Search** - Find files and folders instantly
- 💻 **Syntax Highlighting** - Code display with proper syntax highlighting
- 🔄 **Dynamic File Detection** - Automatically detects new files as you add them
- 📱 **Responsive Design** - Works on desktop and mobile devices
- ⚡ **Fast Performance** - Optimized file system scanning and caching

## 🚀 Quick Start

### Prerequisites
- Node.js (v16 or higher)
- npm or yarn

### Installation & Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Amit-Dey/Competitive-Programming.git
   cd Competitive-Programming
   ```

2. **Install dependencies:**
   ```bash
   npm install
   ```

3. **Start the application:**
   ```bash
   npm start
   ```

4. **Open your browser:**
   - Frontend: `http://localhost:3000`
   - Backend API: `http://localhost:3001`

The application will automatically start both the React frontend and Express backend servers concurrently.

## 🏗️ Architecture

### Frontend (React)
- **Framework:** React 18.2.0 with Hooks
- **Animations:** Framer Motion for smooth transitions
- **Icons:** React Icons (Font Awesome)
- **Styling:** CSS3 with custom animations
- **Code Highlighting:** React Syntax Highlighter with Prism.js

### Backend (Express)
- **Server:** Express.js with CORS support
- **File Watching:** Chokidar for real-time file system monitoring
- **API Endpoints:**
  - `GET /api/files` - Get complete file structure
  - `GET /api/files/content?path={path}` - Get file content
  - `GET /api/search?q={query}` - Search files and folders

### Key Components
- **FileExplorer:** Tree-view file browser with search and expand/collapse
- **FileViewer:** Code display with syntax highlighting and window controls
- **Header:** Profile links and application branding
- **useFileSystem Hook:** Manages file system state and API integration

## 📁 Repository Structure

```
Competitive-Programming/
├── src/                          # React frontend source
│   ├── components/               # React components
│   │   ├── FileExplorer.js      # File tree navigation
│   │   ├── FileViewer.js        # Code display with syntax highlighting
│   │   ├── Header.js            # Application header
│   │   └── *.css                # Component styles
│   ├── utils/                   # Utility functions
│   │   └── fileSystem.js        # File system API integration
│   ├── App.js                   # Main application component
│   └── index.js                 # React entry point
├── server.js                    # Express backend server
├── public/                      # Static assets
├── AtCoder/                     # AtCoder contest solutions
├── Codeforces/                  # Codeforces contest solutions
├── Codechef/                    # CodeChef contest solutions
├── LeetCode/                    # LeetCode problem solutions
├── Algorithms/                  # Algorithm implementations
├── Data-Structure/              # Data structure implementations
├── Junior-Training-Sheet/       # Practice problems
├── Newcomers-Training-Sheet/    # Beginner problems
└── Programming-Language/        # Language-specific resources
```

## 🎯 Features

### File Management
- **Dynamic Loading:** Real-time file system scanning
- **Search Functionality:** Instant search across all files and folders
- **File Type Detection:** Automatic language detection for syntax highlighting
- **Folder Navigation:** Expandable tree structure with smooth animations

### Code Viewing
- **Syntax Highlighting:** Support for C++, Python, JavaScript, and more
- **Copy to Clipboard:** One-click code copying
- **Window Controls:** Minimize/maximize/close functionality
- **Responsive Layout:** Adaptive design for different screen sizes

### User Experience
- **Loading States:** Visual feedback during file loading
- **Error Handling:** Graceful error handling with user-friendly messages
- **Animations:** Smooth transitions and hover effects
- **Modern UI:** Clean, professional interface design

## 🛠️ Development

### Available Scripts

- `npm start` - Start both frontend and backend servers
- `npm run client` - Start only React development server
- `npm run server` - Start only Express backend server
- `npm run build` - Build React app for production
- `npm test` - Run tests

### Adding New Files
Simply add your competitive programming solutions to the appropriate folders. The application will automatically detect and display them in the file explorer!

## 📊 Supported Platforms & Languages

### Competitive Programming Platforms
- **Codeforces** - Contest solutions and practice problems
- **AtCoder** - Beginner to Advanced contest solutions  
- **CodeChef** - Division-wise contest solutions
- **LeetCode** - Algorithm and data structure problems

### Programming Languages
- **C++** - Primary language for competitive programming
- **Python** - Earlier solutions and specific algorithms
- **JavaScript** - Web development and some algorithm implementations

## 🔗 Profile Links

<div align="center">

<a href="https://codeforces.com/profile/Amitdey" target="_blank">
  <img width="120px" src="https://cdn.codeforces.com/s/25433/images/codeforces-sponsored-by-ton.png" alt="Codeforces Profile">
</a>&nbsp;&nbsp;
<a href="https://atcoder.jp/users/Amitdey" target="_blank">
  <img width="80px" src="https://img.atcoder.jp/assets/atcoder.png" alt="AtCoder Profile">
</a>&nbsp;&nbsp;
<a href="https://www.codechef.com/users/amit_dey_iiuc" target="_blank">
  <img width="100px" src="https://cdn.codechef.com/sites/all/themes/abessive/cc-logo.svg" alt="CodeChef Profile">
</a>&nbsp;&nbsp;
<a href="https://leetcode.com/Amit_Dey/" target="_blank">
  <img width="110px" src="https://assets.leetcode.com/static_assets/public/webpack_bundles/images/logo-dark.e99485d9b.svg" alt="LeetCode Profile">
</a>

<br><br>

<a href="https://docs.google.com/spreadsheets/d/19JPrfccZF-jZ6otCpzUQR0NoJi8zDPND3pRWS96tKRo/edit?usp=sharing" target="_blank">
  <img width="50px" src="https://cdn-icons-png.flaticon.com/512/2991/2991114.png" alt="Problem Tracking Sheet" title="Problem Tracking Sheet">
</a>&nbsp;&nbsp;
<a href="https://codeforces.com/group/MWSDmqGsZm/contests" target="_blank">
  <img width="40px" src="https://user-images.githubusercontent.com/64111533/178095000-e807b513-f073-49b0-8804-2e0a4d5f8d1c.png" alt="Training Group" title="Training Group">
</a>

</div>

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/Amit-Dey/Competitive-Programming/issues).

### How to Contribute
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Thanks to all competitive programming platforms for providing excellent problem sets
- React community for the amazing ecosystem
- All contributors and supporters of this project

## 📈 Stats

- **Total Problems Solved:** 500+
- **Languages Used:** C++, Python, JavaScript
- **Platforms:** Codeforces, AtCoder, CodeChef, LeetCode
- **Contest Participation:** Regular participation in contests

---

<div align="center">

**Made with ❤️ by [Amit Dey](https://github.com/Amit-Dey)**

⭐ Star this repository if you find it helpful!

</div>
