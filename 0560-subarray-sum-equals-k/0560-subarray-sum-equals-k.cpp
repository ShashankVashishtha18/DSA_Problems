class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int presum=0;
        unordered_map<int , int> mp;
        mp[0] = 1;
        int N = nums.size();
        
        for(int i=0; i<N; i++){
            presum+=nums[i];
            if(mp[presum-k]){
                cnt+=mp[presum-k];
            }
            mp[presum]++;
        }
        return cnt;
    }
};