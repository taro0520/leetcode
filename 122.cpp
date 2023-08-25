class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num=0;
        for(int i=0;i<prices.size()-1;i++)
            if(prices[i]<prices[i+1])
                num+=prices[i+1]-prices[i];
        return num;
    }
};