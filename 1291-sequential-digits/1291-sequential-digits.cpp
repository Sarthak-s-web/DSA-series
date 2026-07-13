class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits="123456789";
        vector<int> ans;
        int lwstart= to_string(low).size();
        int hgstart= to_string(high).size();
        for(int i=lwstart;i<=hgstart;i++)
        {
            for(int j=0; j+i<=9 ;j++)
            {
                int num= stoi(digits.substr(j,i));
                if(num>= low && num<=high)
                {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};