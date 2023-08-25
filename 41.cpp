class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int res = 1, n = nums.size();
        while (res <= n) {
            if (!st.count(res)) return res;
            ++res;
        }
        return res;
    }
};