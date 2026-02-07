#include <iostream>
#include <queue>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
TreeNode* createTree() {
    // Create nodes manually following the structure:
    // root = [5,4,8,11,null,13,4,7,2,null,null,null,1]
    
    TreeNode* node7 = new TreeNode(7);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node1 = new TreeNode(1);
    
    TreeNode* node11 = new TreeNode(11, node7, node2);
    TreeNode* node13 = new TreeNode(13);
    TreeNode* node4_right = new TreeNode(4, nullptr, node1);
    
    TreeNode* node4_left = new TreeNode(4, node11, nullptr);
    TreeNode* node8 = new TreeNode(8, node13, node4_right);
    
    TreeNode* root = new TreeNode(5, node4_left, node8);
    
    return root;
}
class Solution {
public:
    bool total_sum(TreeNode* node, int current_sum, int target_sum) {
        if(!node){
            return current_sum == target_sum;
        }
        return total_sum(node ->left, current_sum + node->val,target_sum)  ||  total_sum(node ->right, current_sum + node->val,target_sum) ;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return total_sum(root,0,targetSum) ;
    }
};

int main(){
    TreeNode* root = createTree();
    Solution s;
    return s.hasPathSum(root,22);
}