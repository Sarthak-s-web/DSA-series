class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int mid=st+ (end-st)/2;
        while(st<end)
        {
            if(nums[mid] < nums[end])
            {
                end=mid;
            }
            else
            {
                st=mid+1;
            }
            mid=st+(end-st)/2;
        }
        return nums[mid];
    }
};