class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        int ind = 12;
        vector<pair<string,int>>v;
        v.push_back(make_pair("I",1));
        v.push_back(make_pair("IV",4));
        v.push_back(make_pair("V",5));
        v.push_back(make_pair("IX",9));
        v.push_back(make_pair("X",10));
        v.push_back(make_pair("XL",40));
        v.push_back(make_pair("L",50));
        v.push_back(make_pair("XC",90));
        v.push_back(make_pair("C",100));
        v.push_back(make_pair("CD",400));
        v.push_back(make_pair("D",500));
        v.push_back(make_pair("CM",900));
        v.push_back(make_pair("M",1000));
        while(num>0)
        {
            if(num >= v[ind].second)
            {
                ans+=v[ind].first;
                num-=v[ind].second;
            }
            else
                ind--;
        }
        return ans;
    }
};