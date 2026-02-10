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
    map<int,int> occ;
    void dfs(TreeNode* node){
        if(!node)
            return ;
        occ[node->val] ++;
        dfs(node->left);
        dfs(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<pair<int,int>> occ_el;
        for(auto& e:occ){
            occ_el.push_back({e.second, e.first});
        }
        sort(occ_el.begin(), occ_el.end() , greater<pair<int,int>>());
        vector<int> ans;
        int n = occ_el.size();
        for(int i = 0 ; i < n ; i++)
        {
            if(occ_el[i].first < occ_el[0].first)
                break;
            ans.push_back(occ_el[i].second);
        }
        return ans;
    }
};