class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int>freq(26,0);
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]-'a']++;
        }
        sort(freq.begin(), freq.end(),greater<int>());
        int count=0;
        for(int i=0;i<freq.size();i++)
        {
            if(count<8)
            {
                ans+=freq[i];
            }
            else if(count>=8 && count<16)
            {
                ans+=freq[i]*2;
            }
            else if(count>=16 && count<24)
            {
                ans+=freq[i]*3;
            }
            else if(count>=24)
            {
                ans+=freq[i]*4;
            }
            count++;
        }
        return ans;
    }
};