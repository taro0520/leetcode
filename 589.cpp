class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>ans;
        getans(root,ans);
        return ans;
    }
    void getans(Node* root,vector<int>&ans)
    {
        if(root==nullptr)return;
        ans.push_back(root->val);
        for(auto c:root->children)
            getans(c,ans);
    }
};