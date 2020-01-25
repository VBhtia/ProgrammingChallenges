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
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
        
        return 0;
    }
        
     int depRight = maxDepth (root->right);
     int depLeft  = maxDepth (root ->left);
    
     if (depRight >depLeft){
         
         return(depRight+1);
     } else {
         
         return(depLeft +1);
     }
    }
};