class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int id=0;
        string st="";
        char s;
        if(strs.size()==1)
            return strs[0];
        while(1){
            s=strs[0][id];
            if(s==NULL)return st;
            for(int i=1;i<strs.size();i++)
            {
                if(strs[i][id]!=s)
                    return st;
                else if(i==strs.size()-1)
                {
                    st+=s;
                    id++;
                }
            }
        }
    }
};