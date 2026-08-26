class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int count[121]={};
        for(int age:ages)
        {
            count[age]++;
        }
        int ans=0;
        for(int x=1;x<=120;x++)
        {
            if(count[x]==0)
            {
                continue;
            }

            for(int y=x/2+8;y<=x;y++)
            {
                if(count[y]==0)
                {
                    continue;
                }
                ans+=count[x] *(count[y]-(x==y));
            }
        }
        return ans;
    }
};