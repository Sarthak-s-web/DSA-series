class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++)
        {
            if(s.find(k*(i+1))==s.end())
            {
                return (k*(i+1));
            }
        }
        return -1;
    }
};