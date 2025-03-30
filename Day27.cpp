📅 *Schedule for day27:*

❓ Q1: https://bit.ly/3w6hUaa
// Reverse a doubly linked list 
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
       stack<int> stk;
       DLLNode* temp = head;
       while(temp){
           stk.push(temp->data);
           temp = temp->next;
       }
       temp = head;
       while(temp){
           temp->data = stk.top();
           stk.pop();
           temp = temp->next;
       }
       return head;
    }
};



❓ Q2: https://bit.ly/3QlEoMx
 // Delete in a doubly Linked list
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node*dummy = new Node(0); // storing dummy for edge cases
        dummy->next = head;
        Node*temp = dummy->next;
        Node*prev = dummy;
        if(head == NULL) return NULL;
        if(x == 1){
            head = head->next;
            head->prev = nullptr;
            delete(dummy);
            return head;
        }
        int cnt = 0;
        while(temp->next != nullptr){
            cnt++;
            if(cnt == x){
                prev->next = temp->next;
                if(temp->next != nullptr){
                temp->next->prev = prev;
                }
                delete(temp);
                 break;
            }
            else{
            prev = temp;
            temp = temp->next;
        }
        }
        cnt++;
        if(cnt == x){
            prev->next = nullptr;
            temp->next = temp->prev = nullptr;
            delete(temp);
        }
        Node *newhead = dummy->next;
        delete(dummy);
        return newhead;
    }
};
