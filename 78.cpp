class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>s;
        getans(res,s,nums,0);
        return res;
    }
    void getans(vector<vector<int>>&res,vector<int>&s,vector<int>&nums,int c)
    {
        if(c==nums.size())
            res.push_back(s);
        else
        {
                s.push_back(nums[c]);
                getans(res,s,nums,c+1);
                s.pop_back();
                getans(res,s,nums,c+1);
        }
    }
};