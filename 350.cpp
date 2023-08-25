class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size())return intersect(nums2,nums1);
        vector<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
                if(nums1[i]==nums2[j])
                {
                    nums2[j]=-1;
                    s.push_back(nums1[i]);
                    break;
                }
        }
        return s;
    }
};