class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0;
        int curr=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            maxProfit=max(maxProfit,(prices[i]-curr));
            if(prices[i]<curr)
            {
                curr=prices[i];
            }
        }
        return maxProfit;
    }
};