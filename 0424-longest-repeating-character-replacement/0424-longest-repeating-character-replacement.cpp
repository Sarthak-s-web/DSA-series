class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int maxFreq=0;
        int ans=0;
        int l=0;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'A']++;
            maxFreq=max(maxFreq,freq[s[i]-'A']);
            while( ((i-l+1)-maxFreq)> k)
            {
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);
        } 
        return ans;
    }
};