import React from 'react';
import { motion } from 'framer-motion';
import './Header.css';

const Header = () => {
  return (
    <motion.header 
      className="header"
      initial={{ opacity: 0, y: -50 }}
      animate={{ opacity: 1, y: 0 }}
      transition={{ duration: 0.6 }}
    >
      <div className="header-content">
        <motion.h1 
          className="title"
          whileHover={{ scale: 1.05 }}
          transition={{ type: "spring", stiffness: 300 }}
        >
          Competitive Programming Explorer
        </motion.h1>
        <p className="subtitle">
          Browse through solutions and algorithms by Amit Dey
        </p>
        
        <div className="profile-links">
          <motion.a 
            href="https://codeforces.com/profile/Amitdey" 
            target="_blank" 
            rel="noopener noreferrer"
            whileHover={{ scale: 1.1, rotate: 5 }}
            whileTap={{ scale: 0.95 }}
          >
            <img 
              src="https://cdn.codeforces.com/s/25433/images/codeforces-sponsored-by-ton.png" 
              alt="Codeforces"
              width="100"
            />
          </motion.a>
          
          <motion.a 
            href="https://atcoder.jp/users/Amitdey" 
            target="_blank" 
            rel="noopener noreferrer"
            whileHover={{ scale: 1.1, rotate: -5 }}
            whileTap={{ scale: 0.95 }}
          >
            <img 
              src="https://img.atcoder.jp/assets/atcoder.png" 
              alt="AtCoder"
              width="70"
            />
          </motion.a>
          
          <motion.a 
            href="https://www.codechef.com/users/amit_dey_iiuc" 
            target="_blank" 
            rel="noopener noreferrer"
            whileHover={{ scale: 1.1, rotate: 5 }}
            whileTap={{ scale: 0.95 }}
          >
            <img 
              src="https://cdn.codechef.com/sites/all/themes/abessive/cc-logo.svg" 
              alt="CodeChef"
              width="90"
            />
          </motion.a>
          
          <motion.a 
            href="https://leetcode.com/Amit_Dey" 
            target="_blank" 
            rel="noopener noreferrer"
            whileHover={{ scale: 1.1, rotate: -5 }}
            whileTap={{ scale: 0.95 }}
          >
            <img 
              src="https://assets.leetcode.com/static_assets/public/webpack_bundles/images/logo-dark.e99485d9b.svg" 
              alt="LeetCode"
              width="95"
            />
          </motion.a>
        </div>
      </div>
    </motion.header>
  );
};

export default Header;
