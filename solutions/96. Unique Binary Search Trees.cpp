class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        for(int i=0;i<=n;i++){
            if(i<=1)dp[i]=1;
            else{
                for(int j=1;j<=i;j++){
                    dp[i]+=(dp[i-j]*dp[j-1]);
                }
            }
        }
        return dp[n];
    }
};
