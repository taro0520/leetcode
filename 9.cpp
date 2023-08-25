class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        else
        {
            int s[21]={0},id=0;
            while(x>9)
            {
                s[id]=x%10;
                x/=10;
                id++;
            }
            s[id]=x;
            for(int i=0;i<=id;i++)
            {
                if(s[i]!=s[id-i])
                    return false;
            }
            return true;
        }
    }
};