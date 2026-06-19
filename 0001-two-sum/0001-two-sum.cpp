class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp=target-nums[i];
            if(mpp.find(temp)!=mpp.end())
            {
                return {mpp[temp], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1};
    }
};