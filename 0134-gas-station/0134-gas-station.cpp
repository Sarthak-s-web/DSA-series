class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;
        for(int i=0;i<gas.size();i++)
        {
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalcost> totalgas) return -1;
        int idx=0;
        int currgas=0;
        for(int i=0;i<gas.size();i++)
        {
            currgas+=gas[i]-cost[i];
            if(currgas<0)
            {
                idx=i+1;
                currgas=0;
            }
        }
        return idx;
    }
};