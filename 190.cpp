class Solution {
public:
    vector<int> tobin(uint32_t n)
    {
        vector<int>s(32,0);
        int i = 0;
        while(n>1)
        {
            s[i] = n%2;
            n /= 2;
            i++;
        }
        s[i] = n;
        return s;
    }
    uint32_t reverseBits(uint32_t n) {
        int sum = 0;
        long long int b = 1;
        vector<int> s = tobin(n);
        for(int i = s.size() -1 ; i >= 0; --i)
        {
            if(s[i])
                sum += b;
            b *= 2;
        }
        return sum;
    }
};