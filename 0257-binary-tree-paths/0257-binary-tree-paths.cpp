/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool is_leaf(TreeNode * node){
        if(!node)
            return false;
        if(!node->right && !node->left)
            return true;
        return false;
    }
    void dfs(TreeNode* node, vector<string>& v, string s) {
        if (!node) {
            return;
        }
        
        s += s.empty() ? to_string(node->val) : "->" + to_string(node->val);
        if(is_leaf(node))
            v.push_back(s);
        dfs(node->left, v, s);
        dfs(node->right, v, s);


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s;
        dfs(root, ans, s);
        return ans;
    }
};