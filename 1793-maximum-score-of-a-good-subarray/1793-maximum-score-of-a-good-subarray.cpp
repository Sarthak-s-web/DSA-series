class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        int l=k;
        int r=k;
        int minVal=INT_MAX;
        int ans=nums[k];
        while(l>0 || r<n-1)
        {
            if(l==0)
            {
                r++;
            }
            else if(r==n-1)
            {
                l--;
            }
            else if(nums[l-1]>nums[r+1])
            {
                l--;
            }
            else
            {
                r++;
            }
            minVal=min(minVal, min(nums[l],nums[r]));
            ans=max(ans,minVal*(r-l+1));
        }
        return ans;
    }
};