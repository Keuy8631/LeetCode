int uniquePaths(int m, int n) {
    int dp[m][n]={};
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!i||!j) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}