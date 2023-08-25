class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        int maxd=0;
        function<void(TreeNode*,int)>dfs=[&](TreeNode* n,int d)
        {
            if(n==nullptr)return;
            if(d>maxd)
            {
                maxd=d;
                sum=0;
            }
            if(d==maxd)sum+=n->val;
            dfs(n->left,d+1);
            dfs(n->right,d+1);
        };
        dfs(root,0);
        return sum;
    }
};