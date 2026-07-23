class Solution {
public:
int AtMost(vector<int>&nums , int k)
{
    if(k<0) return 0;
    unordered_map<int,int> mpp;
    int l=0;
    int count=0;
    for(int r=0;r<nums.size();r++)
    {
        mpp[nums[r]]++;
        while(mpp.size()>k)
        {
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0)
            {
                mpp.erase(nums[l]);
            }
            l++;
        }
        count+=r-l+1;
    }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      return (AtMost(nums, k)-AtMost(nums,k-1));  
    }
};