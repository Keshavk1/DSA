📅 *Schedule for day31:*

❓ Q1: https://leetcode.com/problems/remove-linked-list-elements/
     class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);     // creating dummy node
        dummy->next = head; // connect to head smart for head deletion 
        ListNode*temp = dummy->next;
        ListNode *prev = dummy;
        while(temp != nullptr){
              if(temp->val == val){
                     prev->next = temp->next;
                     delete(temp);
                     temp = prev->next;
              }
              else{
              prev = temp;
              temp = temp->next;
        }
        }
        ListNode*newhead = dummy->next;
        delete(dummy);
        return newhead;
    }
};


❓ Q2: https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);     // creating dummy node
        dummy->next = head; // connect to head smart for head deletion 
        ListNode*temp = dummy->next;
        ListNode *prev = dummy;
        while(temp != nullptr){
              if(temp->val == val){
                     prev->next = temp->next;
                     delete(temp);
                     temp = prev->next;
              }
              else{
              prev = temp;
              temp = temp->next;
        }
        }
        ListNode*newhead = dummy->next;
        delete(dummy);
        return newhead;
    }
};
