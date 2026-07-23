class Solution {
public:
int helper(vector<int>&nums, int k)
{
    if(k<0) return 0;
    int l=0;
    int count=0;
    for(int r=0;r<nums.size();r++)
    {
        k-=nums[r]%2;
        while(k<0)
        {
            k+=nums[l]%2;
            l++;
        }
        count += r-l+1;
    }
    return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (helper(nums,k) - helper(nums,k-1));
    }
};