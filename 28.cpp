class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle)return 0;
        if(needle=="")return 0;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                for(int j=0;j<needle.size();j++)
                {
                    if(haystack[i+j]!=needle[j])
                        break;
                    else if(j==needle.size()-1)
                        return i;
                }
            }
        }
        return -1;
    }
};