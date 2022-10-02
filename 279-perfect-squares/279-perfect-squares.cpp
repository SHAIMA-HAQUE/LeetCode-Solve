class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2;i<=n;i++){
            dp[i] = i;
            for(int x = 1;x*x <= i;x++){
                dp[i] = min(dp[i], 1+dp[i-x*x]);
            }
        }
        return dp[n];
    }
};