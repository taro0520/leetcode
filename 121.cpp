class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a,b,ans;
        a=INT_MAX;
        ans = 0;
        for(int i = 0; i < prices.size();++i)
        {
            if(prices[i]<a)
            {    
                a=prices[i];
                b=max_element(prices.begin()+i,prices.end())[0];
                if(b-a>ans)
                    ans= b-a;
            }
        }
        return ans;
    }
};