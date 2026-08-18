class Solution {
public:
    int rob(vector<int>& nums) {
     int x=0;
     int y=0;
     for(int i=0;i<nums.size();i++)
     {
        int curr=max(x,y+nums[i]);
        y=x;
        x=curr;
     }   
     return x;
    }
};