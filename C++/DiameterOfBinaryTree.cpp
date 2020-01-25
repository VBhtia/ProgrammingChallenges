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
    int highestVal{0};
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        depthSearch(root);
        return(highestVal);
        
    }
    
    int depthSearch(TreeNode* root) {
    if (root != NULL) {
        
      int left  = depthSearch(root->left);
      int right = depthSearch(root->right);
        
      highestVal = max(highestVal, left + right);
      if (left > right){
          return(left +1);
      } 
        else {
            
            return (right +1);
        }    
    }
    return 0;
  }
    
};