class Solution {
public:
    bool isValid(string s) {
        int x[10000],flag=0,id=0;
       while(id<s.size())
       {
            if(s[id]=='(' || s[id]=='{' || s[id]=='[')
            {
                if(s[id]=='(')  x[flag]=1;
                else if(s[id]=='{')x[flag]=2;
                else if(s[id]=='[')x[flag]=3;
                flag++;   
            }
            else if(s[id]==')' || s[id]=='}' || s[id]==']')
            {
                if(flag==0)return false;
                if(s[id]==')')x[flag]=1;
                else if(s[id]=='}')x[flag]=2;
                else if(s[id]==']')x[flag]=3;
                if(x[flag-1]!=x[flag])
                    return false;
                else
                    flag--; 
            }
           id++;
        }
        if(flag==0)
            return true;
        else
            return false;
    }
};