class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int sumOdd = n*n;
       int sumEven=0;
       if(n>1)
       {
            sumEven = n*(n+1); 
       }
       while(sumEven!=0)
       {
            int rem = sumEven % sumOdd;
            sumOdd = sumEven;
            sumEven = rem; 
       }
       return sumOdd;
    }
};