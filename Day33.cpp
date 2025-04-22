📅 *Schedule for day33:*

❓ Q1: https://leetcode.com/problems/rotate-list/description/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        if(k == 0) return head;
        //  firstly we have to find the length of the list
        ListNode*temp = head;
        int len = 0;
        while(temp->next){
             len++;
            temp = temp->next;
        }
        if(temp){
            len++;
        }
        temp->next = head;
        k = k%len;
        // connecting end to starting for circular list
        
        int skip = len-k;
        ListNode*newtail = temp;  // changing the last node
        while(skip-- && newtail){
            newtail = newtail->next;
        }
        ListNode*newhead = newtail->next; // for the circular linked list
        newtail->next  = nullptr;
        return newhead;
    }
};


// APPROACH :- Using the circular linked list and k = k%n for similar rotations and starting from the newtail and end at the end by setting newtail 



❓ Q2: https://leetcode.com/problems/copy-list-with-random-pointer/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        // making copy with new nodes
        Node*temp  = head;
        while(temp){
            Node*dummynext = temp->next;
            Node*newnode = new Node(temp->val);
            temp->next = newnode;        // pointing to the dummy or copied values
            newnode->next = dummynext; // dummy points to the original next
            temp = dummynext;
        }
        temp = head;
        while(temp){
            Node*copy = temp->next; // since copies are next to them
            if(temp->random){
                copy->random = temp->random->next; // pointing to the next copied value
                 // for eg - a.random = c then give a' to  its random to c'
            }
            temp = temp->next->next; // pointing to the original one only

            // when it points to the last  like c then c->next = c' and next is NULL so no runtime error
        }

    // now disconnecting the copy list to the original list
    temp = head;
    Node*dummy = new Node(0);
    Node*list = dummy;
    while(temp){
        Node*newnode = temp->next;
        temp->next = newnode->next;   // restoring original list
        list->next = newnode;   // making new list
        list = newnode;
        temp = temp->next; // pointing to the original nodes only
    }
    return dummy->next;

    }
};
