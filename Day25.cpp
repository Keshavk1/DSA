📅 *Schedule for day25:*

❓ Q1: https://leetcode.com/problems/delete-node-in-a-linked-list/
code:-
  class Solution {
public:
    void deleteNode(ListNode* node) {          
        ListNode*temp = node;
        temp->val = node->next->val;       // assigning next values
        temp->next = node->next->next;
    }
};

❓ Q2: https://bit.ly/3w9pEIt
// Insertion of new node
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
         temp->next->next->data = x;
        temp->next->next->next = NULL;
    }
};
