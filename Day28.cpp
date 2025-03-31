📅 *Schedule for day28:*

❓ Q1: https://leetcode.com/problems/linked-list-cycle/
  // Linked List Cycle
  //     Tortoise and  Hare algorithm
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == nullptr){
            return false;
        }
        // for the two steps :- fast and slow ;
        ListNode*fast = head; 
        ListNode*slow = head;
        // if infinite loop or cycle then while condition never happen
        while(fast!=NULL && fast->next != nullptr){
               slow = slow->next ;  // single step
               fast = fast->next->next;    // double step;
               // if connected then it can again join or become equal
               if(fast == slow){
                  return true;
               }
        }
        // while condition fails means no cycle
        return false;
    }
};


 // other using checking infinite loop condition 
class Solution {
public:
    bool hasCycle(ListNode *head) {
      if(head == NULL || head->next == nullptr){
        return false;
      }
      ListNode*temp = head;
      int cnt = 0;
      while(temp){
           cnt++;
           if(cnt > 10000){
            return true;
           }
           temp = temp->next;
      }
      return false;
    }
};



❓ Q2: https://leetcode.com/problems/middle-of-the-linked-list/
 // Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return NULL;
            }
        else if(head->next == nullptr){
            return head;
        }
      ListNode* temp = head;
      int cnt =0 ;
      while(temp){                    // counting number of nodes
           temp = temp->next;
           cnt++;
      }  
      int k = cnt/2;           // for the middle 
      int count = 0;
      temp = head;
      while(temp){
        if(count == k){           // traverse till the middle 
            return temp;                  // return temp  as head of new linked list
        }
        temp = temp->next; 
        count++;        
      }
      return NULL;
    }
};

 /*                             Tortoise and hare algorithm                                           */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      // Tortoise and hare algorithem
      ListNode*fast = head;
      ListNode*slow = head ;
      while(fast != NULL && fast->next != nullptr){
        slow = slow->next; // moving 1 step it will go to the middle;
        fast = fast->next->next;     //  moving 2  steps it will go to end 
      }
      return slow;
    }
};




