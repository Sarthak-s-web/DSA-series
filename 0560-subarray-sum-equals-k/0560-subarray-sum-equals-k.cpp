class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int presum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            if(mpp.find(presum-k)!=mpp.end())
            {
                ans+=mpp[presum-k];
            }
            if(presum==k) ans++;
            mpp[presum]++;
        }
        return ans;
    }
};