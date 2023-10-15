class Solution {
public:
    int minOperations(int n) {
        int target = (n+1)/2;

        int to=0;
        for(int i=1; i<=n; i++){
            to = to + abs(i-target);
        }
        return to;
    }
};