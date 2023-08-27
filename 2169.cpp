class Solution {
public:
    int countOperations(int num1, int num2) {
        long long int ans = 0;
        while(num1 > 0 && num2 != 0)
        {
            if(num1 < num2)
                num2-=num1;
            else if(num1 >= num2)
                num1-=num2;
            ans ++;
        }
        return ans;
    }
};
