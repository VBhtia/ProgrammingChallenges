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
    int finalVal{0};
public:
    int findTilt(TreeNode* root) {
        
        
        if(root == 0){
            return 0;
        }
        tiltFunc(root);
        
    return finalVal;
        
    }
    
    int tiltFunc(TreeNode* node){
        if(node == 0){
            return 0;
        }
    int left = tiltFunc(node->left);
    int right = tiltFunc(node->right);
    finalVal += abs(left - right);
    return left + right + node->val;
        
    }
};