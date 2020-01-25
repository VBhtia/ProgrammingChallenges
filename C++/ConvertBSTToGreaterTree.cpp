/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        
        setOrder(root, 0);
        return root;
    }
    
    int setOrder(TreeNode* node, int value) {
    if (node == 0) {
        
        return value;
    }
    int right = setOrder(node->right, value);
    node->val = node->val + right;
    return setOrder(node->left, node->val);
  }
};