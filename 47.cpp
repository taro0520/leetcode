class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        vector<bool>ischose(nums.size(),false);
        vector<int>per;
        getallper(res,ischose,per,nums,0);
        return res;
    }
    void getallper(vector<vector<int>>&res,vector<bool>&ischose,vector<int>&per,vector<int>&nums,int count)
    {
        if(count==nums.size())
        {
            if(!(find(res.begin(),res.end(),per)!=res.end()))
                 res.push_back(per);
        }
           
        for(int i=0;i<nums.size();i++)
        {
            if(ischose[i]==true)
                continue;
            per.push_back(nums[i]);
            ischose[i]=true;
            getallper(res,ischose,per,nums,count+1);
            ischose[i]=false;
            per.pop_back();
        }
    }
};