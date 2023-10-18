class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int , int> map;

        int count =0;

        for(int i=0; i<nums.size(); i++){
            if(map[k-nums[i]] && map[k-nums[i]] > 0){
                map[k-nums[i]]--;
                count++;
            }else{
                map[nums[i]]++;
            }
        }
        return count;
    }
};