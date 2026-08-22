class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int mul=1;
        while(temp>0)
        {
            int digit = temp%10;
            sum+=digit;
            mul*=digit;
            temp=temp/10;
        }
        int div=sum+mul;
        if(n%div==0) return true;
        return false;
    }
};