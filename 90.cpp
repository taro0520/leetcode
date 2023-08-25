class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>p;
        sort(nums.begin(),nums.end());
        getall(res,p,nums,0);
        return res;
    }
    void getall(vector<vector<int>>&res,vector<int>&p,vector<int>&nums,int n)
    {
        if(n<=nums.size())
        {   
            sort(p.begin(),p.end());
            if(!(find(res.begin(),res.end(),p)!=res.end()))
                res.push_back(p);
        }
        for(int i=n;i<nums.size();i++)
        {
            p.push_back(nums[i]);
            getall(res,p,nums,i+1);
            p.pop_back();
        }
    }
};