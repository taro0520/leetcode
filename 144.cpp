class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        getans(root,ans);
        return ans;
    }
    void getans(TreeNode* root,vector<int>&ans)
    {
        if(root==nullptr)return;
        ans.push_back(root->val);
        getans(root->left,ans);
        getans(root->right,ans);
    }
};