class Solution {
public:
int climbDP(int n,vector<int>&dp)
{
    if(n==1 || n==2 || n==3) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=climbDP(n-1,dp)+climbDP(n-2,dp);
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbDP(n,dp);
    }
};