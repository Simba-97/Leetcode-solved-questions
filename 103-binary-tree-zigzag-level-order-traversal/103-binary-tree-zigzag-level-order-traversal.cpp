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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        bool flag = true; //keep check of levels and helps in switching order of printing;
        
        while(!nodeQueue.empty()) {
            int size = nodeQueue.size();
            vector<int> row(size);
            for(int i = 0; i < size; i++){
                TreeNode* node = nodeQueue.front();
                nodeQueue.pop();
                
                //adding from the start or adding from the end
                int index = flag ? i : (size - 1 - i);
                
                row[index] = node->val;
                if(node->left) {
                    nodeQueue.push(node->left);
                }
                if(node->right) {
                    nodeQueue.push(node->right);
                }
            }
            //after changing levels toggle flag
            flag = !flag;
            ans.push_back(row);
        }
        
        return ans;
    }
};