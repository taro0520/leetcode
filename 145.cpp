class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        getans(root,ans);
        return ans;
    }
    void getans(TreeNode* root,vector<int>&ans)
    {
        if(root==nullptr)return;
        getans(root->left,ans);
        getans(root->right,ans);
        ans.push_back(root->val);
    }
};