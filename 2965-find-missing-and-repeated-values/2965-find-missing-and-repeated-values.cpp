class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> temp(n*n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp[grid[i][j]]++;
            }
        }
        int m=temp.size();
        for(int i=0;i<m;i++)
        {
            if(temp[i]==2)
            {
                ans.push_back(i);
            }
        }
        for(int i=1;i<m;i++)
        {
            if(temp[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};