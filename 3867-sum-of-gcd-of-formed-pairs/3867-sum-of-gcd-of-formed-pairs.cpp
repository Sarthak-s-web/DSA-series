class Solution {
public:
long long gcd(int a, int b)
{
    while(b!=0)
    {
        int rem= a%b;
        a=b;
        b=rem;
    }
    return a;
}
    long long gcdSum(vector<int>& nums) {
        vector<long long>prefixGcd;
        int maxGcd=0;
        for(int i=0;i<nums.size();i++)
        {
            maxGcd=max(maxGcd,nums[i]);
            prefixGcd.push_back(gcd(maxGcd,nums[i]));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long ans=0;
        int l=0;
        int r=prefixGcd.size()-1;
        while(l<r)
        {
            ans+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
        return ans;
    }
};