class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int curr=0;
        int r=nums.size()-1;
        while(curr<=r)
        {
            if(nums[curr]==0)
            {
                swap(nums[l],nums[curr]);
                l++;
                curr++;
            }
            else if(nums[curr]==1)
            {
                curr++;
            }
            else
            {
                swap(nums[curr],nums[r]);
                r--;
            }
        }
    }
};