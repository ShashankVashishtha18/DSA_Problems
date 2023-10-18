/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraysDivByK = function(nums, k) {
    const map = new Map();
    map.set(0,1);

    let ans=0;
    let sum=0;

    for(let i=0; i<nums.length; i++){
        sum+=nums[i];

        let rem = sum % k ;
        if(rem < 0){
            rem += k;
        }

        if(map.has(rem)){
            ans += map.get(rem);
        }
        map.set(rem, (map.get(rem) || 0) + 1);

    }
    return ans;

};