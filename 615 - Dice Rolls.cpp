int Solution::solve(int A) {
    int mod=1e9+7;
    int dp[A+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=A;i++){
        for(int j=1;j<=6;j++){
            if(i>=j) dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
        }
    }
    return dp[A];
}
