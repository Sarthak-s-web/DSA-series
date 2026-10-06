class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<int,int>mpp;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        return mpp.size();
    }
};