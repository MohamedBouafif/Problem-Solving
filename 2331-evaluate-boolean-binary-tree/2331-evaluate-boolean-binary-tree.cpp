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

    bool dfs(TreeNode* node){
        if(!node->left && !node->right){
            return node->val;
        }
        if(node->val == 2)
            return dfs(node->left) || dfs(node->right);
        else 
            return dfs(node->left) && dfs(node->right);
    }
    bool evaluateTree(TreeNode* root) {
        return dfs(root);
    }
};