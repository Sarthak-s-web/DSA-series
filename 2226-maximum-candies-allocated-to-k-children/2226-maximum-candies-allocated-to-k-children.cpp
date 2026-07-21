class Solution {
public:
long long helper(vector<int>&candies, long long candy)
{
    long long ans=0;
    for(int i=0;i<candies.size();i++)
    {
        ans+= candies[i]/candy;
    }
    return ans;
}
    int maximumCandies(vector<int>& candies, long long k) {
        long long maxCan=0;
        long long sum=0;
        for(int i=0;i<candies.size();i++)
        {
            maxCan=max(maxCan,(long long)candies[i]);
            sum+=candies[i];
        }
        if(sum<k) return 0;

        long long low=1;
        long long end=maxCan;
        long long ans=0;
        while(low<=end)
        {
            long long mid=low+(end-low)/2;
            long long candy= helper(candies,mid);
            if(candy>=k)
            {
                ans=max(ans,mid);
                low=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};