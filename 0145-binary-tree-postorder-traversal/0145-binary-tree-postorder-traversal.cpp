/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* node, vector<int>& v){
        if(!node)
            return;
        
        dfs(node->left,v);
        dfs(node->right,v);
        v.push_back(node->val);

    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        dfs(root,ans);
        return ans;
    }
};