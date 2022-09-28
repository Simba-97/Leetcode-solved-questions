/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        swap(node->val, node->next->val); // 1 -> 2 -> 4 -> 5 -> 6
        auto temp = node->next;
        node->next = node->next->next;
        delete(temp);
    }
};