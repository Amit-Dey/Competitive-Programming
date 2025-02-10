/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function(digits) {
    if(digits.length === 0) return [];
    let map = {
        2: ['a','b','c'],
        3: ['d','e','f'],
        4: ['g','h','i'],
        5: ['j','k','l'],
        6: ['m','n','o'],
        7: ['p','q','r','s'],
        8: ['t','u','v'],
        9: ['w','x','y','z']
    };
    let result = [];

    function backtrack(index, current){
        if(index === digits.length){
            result.push(current);
            return;
        }
        let digit = digits[index];
        let letters = map[digit];
        for(let i = 0; i < letters.length; i++){
            backtrack(index+1, current + letters[i]);
        }
    }
    backtrack(0, '');

    return result;
    
};