class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minVal=INT_MAX;
        int maxVal=INT_MIN;
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            minVal =min(minVal,nums[i]);
            maxVal=max(maxVal,nums[i]);
            mpp[nums[i]]++;
        }
        for(int i=minVal;i<maxVal;i++)
        {
            if(mpp.find(i)==mpp.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};