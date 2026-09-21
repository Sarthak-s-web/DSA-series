class Solution {
public:
    int reverseDegree(string s) {
        vector<int>degree(26,0);
        int count=26;
        for(int i=0;i<s.size();i++)
        {
            degree[s[i]-'a']=count - (s[i]-'a');
        }
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int add=degree[s[i]-'a']*(i+1);
            sum+=add;
        }
        return sum;
    }
};