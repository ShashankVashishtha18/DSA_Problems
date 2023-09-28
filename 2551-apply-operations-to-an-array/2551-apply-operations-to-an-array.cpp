class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector <int> ans;
        int cntN=0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = 2*nums[i];
                nums[i+1] = 0;
            }
        }
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                cntN++;
            }
            else {
                ans.push_back(nums[i]);
            }
        }

        while(cntN--){
            ans.push_back(0);
        }
        return ans;
    }
};