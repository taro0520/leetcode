class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        if(target<nums[0])
            return 0;
        else
        {
            for(i=0;i<nums.size();i++)
            {
                if(target==nums[i])
                    break;    
                else if(target<nums[i])
                    return i;
            }
            return i;
        }
    }
};