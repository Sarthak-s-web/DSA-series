class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        long long temp=0;
        while(n>0)
        {
            int d= n %10;
            if(d>0)
            {
                x = (x*10)+d;
                sum=sum+d;
            }
            n=n/10;
        }
        temp=x;
        x=0;
        while(temp > 0)
        {
            int d= temp %10;
            x = (x*10)+d;
            temp=temp/10;
        }
        x= x*sum;
        return x;
    }
};