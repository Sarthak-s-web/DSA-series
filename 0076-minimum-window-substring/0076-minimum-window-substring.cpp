class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        unordered_map<int,int>need;
        for(int i=0;i<t.size();i++)
        {
            need[t[i]]++;
        }
        unordered_map<int,int> valid;
        int l=0;
        int minLen=INT_MAX;
        int count=0;
        int start=0;
        for(int r=0;r<s.size();r++)
        {
            char c=s[r];
            valid[c]++;
            if(need.count(c) && valid[c]<=need[c])
            {
                count++;
            }
            while(t.size()==count)
            {
                if(r-l+1 <= minLen)
                {
                    minLen=min(r-l+1,minLen);
                    start=l;
                }
                char c=s[l];
                valid[c]--;
                if(need.count(c) && valid[c]<need[c])
                {
                    count--;
                }
                l++;
            }
        }
        if(minLen==INT_MAX)
        {
            return"";
        }
        return s.substr(start,minLen);
    }
};