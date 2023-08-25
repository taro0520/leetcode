class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>p;
        vector<bool>b(nums.size(),false);
        getans(res,p,nums,b,0);
        return res;
    }
    void getans(vector<vector<int>>&res,vector<int>&p,vector<int>&n,vector<bool>&b,int c)
    {
        if(c==n.size())
            res.push_back(p);
        else
        {
            for(int i=0;i<n.size();i++)
            {
                if(b[i]==true)continue;
                p.push_back(n[i]);
                b[i]=true;
                getans(res,p,n,b,c+1);
                b[i]=false;
                p.pop_back();
            }
        }
    }
};