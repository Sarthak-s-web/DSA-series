class Solution {
public:
long long timeTaken(vector<int>& piles,int k)
{
    long long ans=0;
    for(int i=0;i<piles.size();i++)
    {
        ans+= (piles[i]+k-1)/k;
    }
    return ans;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxVal=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            maxVal=max(maxVal,piles[i]);
        }
        int low=1;
        int end=maxVal;
        while(low<=end)
        {
            int mid = low +(end-low)/2;
            long long reqTime = timeTaken(piles,mid);
            if(reqTime <= h)
            {
                end=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};