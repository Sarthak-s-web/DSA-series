class Solution {
public:
int fdp(int n, vector<int>&f)
{
    if(n<=1) return n;
    if(f[n]!=-1) return f[n];
    return f[n] = fdp(n-1,f) + fdp(n-2,f);
}
    int fib(int n) {
       vector<int>dp(n+1,-1);
       return fdp(n, dp);
    }
};