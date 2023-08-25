class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>p;
        getall(res,p,n,k,1);
        return res;
    }
    void getall(vector<vector<int>>&res,vector<int>&p,int n,int k,int id)
    {
        if (k == 0) { res.push_back(p); return; }
        for (int i =id; i <= n; ++i) {
            p.push_back(i);
            getall(res,p,n,k-1,i+1);
            p.pop_back();
        }
    }
};