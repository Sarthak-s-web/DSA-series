class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(), 1);
        int suff=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            ans[i] = ans[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suff=suff*nums[i+1];
            ans[i]=ans[i]*suff;
        }
        return ans;
    }
};