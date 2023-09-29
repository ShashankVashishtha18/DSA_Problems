class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      bool increasing = true;
      bool decreasing = true;
      int n=nums.size();
    
      for(int i=1; i<n; i++){
        if(nums[i] > nums[i-1]){
          increasing = false;
        }
        else if(nums[i] < nums[i-1]){
          decreasing = false;
        }

        if(!increasing && !decreasing){
          return false;
        }
      }
      return true;
    }
};