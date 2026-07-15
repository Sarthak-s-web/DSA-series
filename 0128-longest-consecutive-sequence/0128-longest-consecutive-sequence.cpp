class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int maxCons=0;
        for(int nu: st)
        {
            if(st.find(nu-1)==st.end())
            {
                int curr=nu;
                int len=1;
                while(st.find(curr+1)!=st.end())
                {
                    curr++;
                    len++;
                }
                maxCons=max(maxCons, len);
            }
        }
        return maxCons;
    }
};