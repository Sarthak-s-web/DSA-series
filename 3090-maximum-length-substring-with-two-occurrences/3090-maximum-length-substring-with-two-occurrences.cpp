class Solution {
public:
    int maximumLengthSubstring(string s) {
     unordered_map<char,int>mpp;
     int l=0;
     int ans=0;
     for(int r=0;r<s.size();r++)
     {
        mpp[s[r]]++;
        while(mpp[s[r]]>2)
        {
            mpp[s[l]]--;
            l++;
        }
        ans=max(ans,r-l+1);
     }   
     return ans;
    }
};