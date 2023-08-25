class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        bool tf;
        for(int i = 0; i < nums.size(); ++i)
        {
            tf = false;
            for(int j = 0; j < nums.size(); ++j)
            {
                if(nums[j]==nums[i] && i!=j)
                {
                    tf = true;
                    break;
                }
            }
            if(!tf)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};