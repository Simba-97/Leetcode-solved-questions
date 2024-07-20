/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int getHeight(TreeNode* root) {
        if (root == NULL)
            return 0;

        return 1 + max(getHeight(root->left), getHeight(root->right));
    }

    void solve(TreeNode* root, bool& ans) {
        if (root != NULL) {
            solve(root->left, ans);
            int lh = getHeight(root->left);
            int rh = getHeight(root->right);

            int diff = abs(lh - rh);
            if(diff > 1){
                ans = ans && false;
            }
            solve(root->right, ans);
        }
    }

    bool isBalanced(TreeNode* root) {
        bool ans = true;
        solve(root, ans);
        return ans;
    }
};