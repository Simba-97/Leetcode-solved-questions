/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* reversel1 = reverseList(l1);
        ListNode* reversel2 = reverseList(l2);
        
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry = 0;
        while(reversel1 != NULL || reversel2 != NULL || carry){
            int sum = 0;
            if(reversel1 != NULL) {
                sum += reversel1->val;
                reversel1 = reversel1->next;
            }
            if(reversel2 != NULL) {
                sum += reversel2->val;
                reversel2 = reversel2->next;
            }
            
            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum % 10);
            temp->next = node;
            temp = temp->next;
        }
        return reverseList(dummy->next);
        
    }
    
    ListNode* reverseList(ListNode* head) {
        if  (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
};