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
    bool is_parent_of_left_leaf(TreeNode* node){
        return node && node->left && !node->left->left && !node->left->right;
        
    }
    int dfs(TreeNode* node ){
        if(!node)
            return 0;
        if(is_parent_of_left_leaf(node))
            return node->left->val + dfs(node->left) + dfs(node->right);
        return dfs(node->left) + dfs(node->right);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root);
    }
};