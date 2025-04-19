📅 *Schedule for day32:*

❓ Q1: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
    class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {                  // iterating through linked list and checking if it is equal to the previous one 
       if(!head) return nullptr;
       ListNode*dummy  = new ListNode(0,head);
       ListNode*prev = dummy;
       ListNode*curr = head;
       while(curr){
        bool isduplicate = false;
        while(curr->next && curr->val == curr->next->val){              // checking value equal to the next one
            isduplicate = true;
            curr = curr->next;
       }
       if(isduplicate){
        prev->next = curr->next;                    // directly giving link to the current->next               /* here we are not deleting we only change the link*/
       }
       else{
        prev = prev->next;                            //  If Unequal then move forward the prev since sorted 
       }
       curr = curr->next;                                // iterating through linked list
       }
       return dummy->next;                          // it is head of the linked list
    }
};






❓ Q2: https://leetcode.com/problems/reverse-nodes-in-k-group/description/

  * BRUTE FORCE
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
   class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vec; // storing in vector and work on the vector
        ListNode* temp = head;
        while(temp){                   // storing
            vec.push_back(temp->val);
            temp = temp->next;
            }
        int i = 0 ;
        while(i+k<=vec.size()){               // iterating i+k<=size to control out of bound condition
            reverse(vec.begin()+i,vec.begin()+i+k); // i+k may be out of bound
            i+=k;
        }
        ListNode*dummy = new ListNode(0);              //initial  dummy node insertion from starting
        ListNode*curr = dummy;             // represens currenct node
        for(auto it : vec){
            curr->next = new ListNode(it);      // making new node to the next of current
            curr = curr->next;   // moving current
        }
        return dummy->next;          // since dummy is the start so dummy next will be head
    }

};



OPTIMAL :- 
