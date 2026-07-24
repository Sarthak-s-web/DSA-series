class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        map<int,int> mpp;
        int l=0;
        int sum=0;
        for(int r=0;r<nums.size();r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                mpp[r-l+1]=sum;
                sum-=nums[l];
                l++;
            }
        }
        return (mpp.begin()->first);
    }
};