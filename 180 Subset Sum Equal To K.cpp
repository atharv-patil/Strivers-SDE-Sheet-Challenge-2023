#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(k+1,vector<int> (n,0));
    for(int j=0;j<n;j++){
        dp[0][j]=1;
    }
    for(int i=1;i<=k;i++){
        if(i==arr[0])
        dp[i][0]=1;
    }
    for(int j=1;j<n;j++){
        for(int i=1;i<=k;i++){
            int nottake = dp[i][j-1];
            int take = 0;
            if(i-arr[j]>=0){
                take = dp[i-arr[j]][j-1];
            }
            if(take==1 or nottake==1){
                dp[i][j]=1;
            }
        }
    }
    return dp[k][n-1];
}
