class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int sum = 0;
        vector<vector<int>>dp(m, vector<int>(n, 0));
        
        for(int i = 0;i<m;i++){
            dp[i][0] = (int)matrix[i][0] - 48;
        }
        for(int j = 0;j<n;j++){
            dp[0][j] = (int)matrix[0][j] - 48;
        }
        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                if(matrix[i][j] == '0'){
                    dp[i][j]  = 0;
                }else{
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                }
                
                
            }
        }
        int maxi = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                maxi = max(dp[i][j], maxi);
            }
            cout << endl;
        }
        
        return maxi*maxi;
        
    }
};