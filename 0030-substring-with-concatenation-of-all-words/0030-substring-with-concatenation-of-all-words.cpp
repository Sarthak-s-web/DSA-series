class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        unordered_map<string,int>need;
        int len=words[0].size();
        for(int i=0;i<words.size();i++)
        {
            need[words[i]]++;
        }
    
        
        for(int i=0;i<len;i++)
        {
            int l=i;
            unordered_map<string,int>mpp;
            int count=0;
            for(int r=i;r+len<=s.size();r+=len)
            {
                string temp=s.substr(r,len);
                if(need.count(temp))
                {
                mpp[temp]++;
                count++;
                while(mpp[temp]>need[temp])
                {
                    string remove=s.substr(l,len);
                    mpp[remove]--;
                    count--;
                    l+=len;
                }
                if(words.size()==count)
                {
                    ans.push_back(l);
                    string remove=s.substr(l,len);
                    mpp[remove]--;
                    count--;
                    l+=len;
                }
                }
                else
                {
                    mpp.clear();
                    count=0;
                    l=r+len;
                } 
            }
        }
        return ans;
    }
};