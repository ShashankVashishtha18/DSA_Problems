/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxOperations = function(nums, k) {
    const map = new Map();
    let count = 0;

    for (let i = 0; i < nums.length; i++) {
        if (map.has(k - nums[i]) && map.get(k - nums[i]) > 0) {
            map.set(k - nums[i], map.get(k - nums[i]) - 1);
            count++;
        } else {
            map.set(nums[i], (map.get(nums[i]) || 0) + 1);
        }
    }

    return count;

};