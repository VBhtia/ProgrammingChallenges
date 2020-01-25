/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    stack<ListNode*> listNum;
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* tempVal1;
        ListNode* tempVal2;
        tempVal1 = head;
        tempVal2 = head;
        int itr{0};
        while(itr< n){
            tempVal1 = tempVal1->next;
            itr++;
        }
      
        if (tempVal1== NULL) {
            
            head = head ->next;
        }
      
      else {
          while(tempVal1->next != NULL){
           tempVal1 = tempVal1->next;
           tempVal2 = tempVal2->next;
       }
          ListNode* next;
          next = tempVal2->next;
          tempVal2->next = next->next;
          next->next = NULL; 
      }
    
        
    return head;
}
};