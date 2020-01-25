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
    bool isSymmetric(TreeNode* root){
        
        TreeNode* leftNode;
        TreeNode* rightNode;
        
        if (root == NULL){
            return true;
        }
        
        return (symmetryFunc(root->left, root->right));
        
    }


bool symmetryFunc( TreeNode* leftNode, TreeNode* rightNode){
    
    if (leftNode == NULL && rightNode == NULL) {
            return true;
        }
        if (leftNode == NULL || rightNode == NULL) {
            return false;
        }
    
    return leftNode->val == rightNode->val && symmetryFunc(leftNode->left, rightNode->right) && symmetryFunc(leftNode->right, rightNode->left);
  }
 };