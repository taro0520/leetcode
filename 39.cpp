class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>combin;
        getans(res,combin,candidates,target,0);
        return res;
    }
    void getans(vector<vector<int>>&res,vector<int>&combin,vector<int>&ns,int t,int id)
    {
        if(!t)res.push_back(combin);
        else
        {
            for(int i=id;i<ns.size() && t>=ns[i];i++)
            {
                combin.push_back(ns[i]);
                getans(res,combin,ns,t-ns[i],i);
                combin.pop_back();
            }
        }
    }
};