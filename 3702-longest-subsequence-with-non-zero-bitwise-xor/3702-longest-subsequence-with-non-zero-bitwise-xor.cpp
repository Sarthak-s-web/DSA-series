class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int temp=0;
        bool nonZero=false;
        for(int i=0;i<nums.size();i++)
        {
            temp=temp^nums[i];
            if(temp!=0)
            {
                nonZero=true;
            }
        }
        if(temp!=0) return nums.size();
        if(nonZero) return nums.size()-1;
        return 0;
    }
};