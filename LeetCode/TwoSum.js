/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    var map = {};
    
    for(var i = 0; i < nums.length; i++){
        var diff = target - nums[i];
        if(map.hasOwnProperty(diff)){
            return [map[diff], i];
        }
        map[nums[i]] = i; 
    }
    
    return [];
    
};