class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int t=0;
        digits[digits.size()-1]++;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]+t>9)
            {
                ans.push_back(digits[i]+t-10);
                t=1;
            }
            else
            {
                ans.push_back(digits[i]+t);
                t=0;
            }
        }
        if(t==1)ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};