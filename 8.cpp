class Solution {
public:
    int myAtoi(string s) {
        int t=0,d=0,f=1,ans=0;
        for(int i=0;i<s.size();i++)
            if(s[i]=='+' || s[i]=='-'){f=s[i]=='+'?1:-1;d=i+1;break;}
            else if(s[i]>='0' && s[i]<='9')
            {
                d=i;
                break;
            }
            else if(s[i]!=' ') return 0;
       while(d<s.size() && s[d]>='0' && s[d]<='9')
       {
           if(ans<INT_MAX/10 ||(ans==INT_MAX/10 && s[d]-'0'<=7))
            ans=ans*10+(s[d]-'0');
           else
           {
               if(f==-1)return INT_MIN;
               else return INT_MAX;
           }      
           d++;
       }
        return ans*f;
    }
};