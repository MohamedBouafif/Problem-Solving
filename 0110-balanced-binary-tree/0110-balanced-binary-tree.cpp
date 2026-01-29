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
    bool balanced = true;
    int dfs(TreeNode* node){
        if(!node)
            return 0;
        if(!balanced)
            return 0;
        int left_subtree_depth = dfs(node->left) + 1;
        int right_subtree_depth = dfs(node->right) + 1;
        if(abs(left_subtree_depth - right_subtree_depth) > 1)
            balanced = false;
        return max(left_subtree_depth,right_subtree_depth);
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return balanced;
    }
};