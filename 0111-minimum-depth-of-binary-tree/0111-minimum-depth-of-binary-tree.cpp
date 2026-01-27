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
    bool is_leaf(TreeNode* node){
        if(node)
            return !node->right && !node->left;
        return false;
    }
    int dfs(TreeNode* node, int depth){
        if(!node)
            return 1e5;
        if(is_leaf(node))
            return depth;
        return min(dfs(node->left,depth+1),dfs(node->right,depth+1));
        
    }
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        return dfs(root,1);
    }
};