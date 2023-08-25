class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return mirror(root,root);
    }
    bool mirror(TreeNode* r1,TreeNode* r2)
    {
        if(!r1 && !r2)return true;
        if(!r1 || !r2)return false;
        return r1->val==r2->val && mirror(r1->left,r2->right) && mirror(r1->right,r2->left);
    }
};