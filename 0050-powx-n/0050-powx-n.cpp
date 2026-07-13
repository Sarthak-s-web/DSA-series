class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long binform=n;
        if(binform < 0)
            {
                binform=-binform;
                x=1/x;
            }
        while(binform >0)
        {
            if(binform % 2==1)
            {
                ans*=x;
            }
            x=x*x;
            binform/=2;
        }
        return ans;
    }    
};