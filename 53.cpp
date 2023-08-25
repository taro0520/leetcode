class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int res=curr;
        for(int i=1;i<n;i++)
        {
            curr+=nums[i];
            curr=max(curr,nums[i]);
            res=max(curr,res);
        }
        return res;
    }
};