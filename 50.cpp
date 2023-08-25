class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        for(int i=n;i!=0;i/=2)
        {
            if(i%2!=0)ans*=x;
            x*=x;
        }
        n<0?ans=1/ans:ans=ans;
        return ans;
    }
};