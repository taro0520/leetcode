class Solution {
public:
    int addDigits(int num) {
        int t;
        while(1)
        {
            t=0;
            while(num>9)
            {
                t+=num%10;
                num/=10;
            }
            t+=num;
            num=t;
            if(num<10) return num;
        }
    }
};