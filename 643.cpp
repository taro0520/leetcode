class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double temp=0;
        double ans=INT_MIN;
        for(int i = 0; i < nums.size()-k+1; ++i)
        {
            if(i==0)
                for(int j = 0; j < k; ++j)
                    temp+=nums[i+j];
            else
                temp=temp + nums[i+k-1]-nums[i-1];
            ans=max(ans,temp/k);
        }
        return ans;
    }
};