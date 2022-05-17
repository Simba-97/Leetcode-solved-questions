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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* res;
        return preorder(original, cloned, target, res);
    }
    
    TreeNode* preorder(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode* &res) {
        if(original != NULL) {
            if(original == target) {
                res = cloned;
            }
            preorder(original->left, cloned->left, target, res);
            preorder(original->right, cloned->right, target, res);
        } 
        return res;
    }
};