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
    int maxVal{0};
    int finalVal{0};
public:
    int findBottomLeftValue(TreeNode* root) {
        
        setOrder(root, 1);
        return finalVal;
    }
    
    
    void setOrder(TreeNode* node, int order){
        
        if (node!=0){
            
            if (order > maxVal){
                
                finalVal = node->val;
                maxVal  =  order;
            }
            
      setOrder(node->left, order + 1);
      setOrder(node->right,order + 1);
        }
    
    }
};