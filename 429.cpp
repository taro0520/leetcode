class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        getans(root,0,ans);
        return ans;
    }
    void getans(Node* root,int d,vector<vector<int>>&ans)
    {
        if(root==nullptr)return;
        while(ans.size()<=d)ans.push_back({});
        ans[d].push_back(root->val);
        for(auto c:root->children)
            getans(c,d+1,ans);
    }
};