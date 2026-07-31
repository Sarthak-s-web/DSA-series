class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        unordered_map<char,int> mpp;
        for(int i=0;i<word.size();i++)
        {
            mpp[word[i]]++;
        }
        int count=0;
        vector<int>temp;
        for(auto it:mpp)
        {
            temp.push_back(it.second);
        }
        sort(temp.begin(), temp.end(),greater<int>());
        for(int i=0;i<temp.size();i++)
        {
            if(count<8)
            {
                ans+=temp[i];
            }
            else if(count>=8 && count<16)
            {
                ans+=temp[i]*2;
            }
            else if(count>=16 && count<24)
            {
                ans+=temp[i]*3;
            }
            else if(count>=24)
            {
                ans+=temp[i]*4;
            }
            count++;
        }
        return ans;
    }
};