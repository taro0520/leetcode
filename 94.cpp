class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        getinorder(root,ans);
        return ans;
    }
    void getinorder(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)return;
        getinorder(root->left,ans);
        ans.push_back(root->val);
        getinorder(root->right,ans);
    }
};