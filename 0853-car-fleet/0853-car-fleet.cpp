class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cars;
        for(int i=0;i<position.size();i++)
        {
            double time=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.begin(),cars.end());

        stack<double>st;
        int n=position.size();
        st.push(cars[n-1].second);
        int fleet=1;
        for(int i=n-2;i>=0;i--)
        {
            if(!st.empty() && st.top()<cars[i].second)
            {
                st.push(cars[i].second);
                fleet++;
            }
        }
        return fleet;
    }
};