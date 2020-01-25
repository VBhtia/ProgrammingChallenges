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
    bool hasCycle(ListNode *head) {
        
        if (head == NULL) return false;
        
        if (head->next == NULL) return false;
        ListNode* val1;
        ListNode* val2;
        val1 = head;
        val2 = head;
        
        while((val2 != NULL) && (val2->next != NULL)){
            
             val1 = val1->next;
             val2 = val2->next->next;
             
             if(val1==val2) return true;
        }
        return false;
    }
};