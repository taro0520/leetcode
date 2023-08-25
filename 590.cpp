class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>ans;
        getans(root,ans);
        return ans;
    }
    void getans(Node* root,vector<int>&ans)
    {
        if(root==nullptr)return;
        for(auto c:root->children)
            getans(c,ans);
        ans.push_back(root->val);
    }
};