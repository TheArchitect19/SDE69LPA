#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(i==1 and j==1){
                    dp[i][j]=1;
                }
                else{
                    int left= (j==1)?0:dp[i][j-1];
                    int top = (i==1)?0:dp[i-1][j];;
                    dp[i][j]=left+top;
                }
            }
        }
        return dp[m][n];
}