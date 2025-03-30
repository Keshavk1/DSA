📅 *Schedule for day26:*

❓ Q1: https://bit.ly/3QD4hHs
// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node*temp = head;          // declaration of temp node
        Node* added = new Node(data);               // new node
        int cnt = 0;                                        // count variable
         while(cnt<pos && temp != nullptr){            // cnt till pos
            temp = temp->next;
            cnt++;
        }
        added->next = temp->next;                       // connection
        if(temp->next != nullptr){                  // if not the last
            temp->next->prev = added;
        }
        temp->next = added;
        added->prev = temp;
        
        return head;
    }
};
❓ Q2: https://bit.ly/3Epriup

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node *temp = head;
        while(temp){
            if(temp->data == key){
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
};
