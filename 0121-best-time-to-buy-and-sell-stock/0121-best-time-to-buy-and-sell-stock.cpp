class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currPrice= INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(currPrice > prices[i])
            {
                currPrice=prices[i];
            }
            else if(prices[i] - currPrice > maxProfit)
            {
                maxProfit = prices[i] - currPrice;
            }
        }
        return maxProfit;
    }
};