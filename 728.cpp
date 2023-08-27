class Solution {
public:
    bool isDividing(int n)
    {
        bool tf = true;
        int num = n;
        while(n>9)
        {
            if(n%10 == 0)
            {
                tf = false;
                break;
            }
            if(num % (n% 10) == 0)
                n /= 10;
            else
            {
                tf = false;
                break;
            }
        }
        if(num % n != 0 && tf) tf = false;
        return tf;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left; i <= right; ++i)
        {
            if(isDividing(i))
                ans.push_back(i);
        }
        return ans;
    }
};
