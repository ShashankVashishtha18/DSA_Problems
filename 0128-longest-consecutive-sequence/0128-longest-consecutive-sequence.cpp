class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        sort(nums.begin() , nums.end());

        int Lseq = 0;
        int currseq = 1;

        
        for(int i=1; i<n; i++){
             
            if(nums[i] == nums[i-1] + 1){
                currseq++;
            }
            else if(nums[i] > nums[i-1]){
                Lseq = max(Lseq , currseq);
                currseq = 1;
            }
        }
        
        return max(Lseq , currseq);
    }
};