class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        if(k==0){
            if(nums1==nums2) return 0;
            else return -1;
        }

        long long p=0;
        long long n=0;
        for(int i=0;i<nums1.size();i++)
        {
            int diff =nums1[i]-nums2[i];

            if(diff % k!=0)
            {
                return -1;
            }
            
            if(diff>0) p+=diff;
            if(diff<0) n+=-diff;
        }

        if(p!=n) return -1;

        return p/k;
    }
};