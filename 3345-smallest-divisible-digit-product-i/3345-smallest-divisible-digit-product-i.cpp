class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; ; i++)
        {
            int x=i;
            int product=1;
            while(x>0)
            {
                product*=(x%10);
                x=x/10;
            }
            if(product % t==0)
            {
                return i;
            }
        }
    }
};