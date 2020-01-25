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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* otherHead = NULL ;
        
        ListNode* tempVal;
        
        while(head!= NULL){
            
            tempVal = head->next;
            head->next = otherHead;
            otherHead = head;
            head = tempVal;
        }
        return otherHead;
    }
};