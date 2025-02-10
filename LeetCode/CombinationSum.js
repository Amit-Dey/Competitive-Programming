/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {

    let result = [];

    function backtrack (index, current, sum){
        if(sum === target){
            result.push(current);
            return;
        }

        if(sum > target){
            return;
        }

        for(let i = index; i < candidates.length; i++){
            backtrack(i, [...current, candidates[i]], sum + candidates[i]);
        }

    }

    backtrack(0, [], 0);

    return result;
    
};