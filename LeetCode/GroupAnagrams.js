/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {

    var map = {}

    for (var i = 0; i < strs.length; i++) {
        var str = strs[i].split('').sort().join('');
        if (map[str]) {
            map[str].push(strs[i]);
        } else {
            map[str] = [strs[i]];
        }
    }

    var result = [];
    for (var key in map) {
        result.push(map[key]);
    }

    return result;

    
};