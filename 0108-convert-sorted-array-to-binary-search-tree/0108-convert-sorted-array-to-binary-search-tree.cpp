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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        
        return makeBinTree(nums, 0, nums.size()-1);
    }
    
    TreeNode* makeBinTree(vector<int>& nums, int left, int right){
        if(left > right) return NULL;
        int midpoint = left + (right - left)/2;
        TreeNode* node = new TreeNode(nums[midpoint]);
        node->left = makeBinTree(nums, left, midpoint-1);
        node->right = makeBinTree(nums, midpoint+1, right);
        
        return node;
    }
};