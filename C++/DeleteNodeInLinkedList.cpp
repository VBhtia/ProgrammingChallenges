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
    ListNode* first;
    first = node;
    
    ListNode* last;
    last = node;
    
    ListNode* next;
    next = node->next;
    
    while (next != NULL) {
    last = first;
    
    int tempVal = first->val;
    first->val = next->val;
    next->val = tempVal;
    first = first->next;
    next = next->next;
    }
    last->next = NULL;
  }
   
};