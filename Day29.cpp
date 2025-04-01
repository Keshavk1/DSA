📅 *Schedule for day29:*

❓ Q1: https://bit.ly/3dyXL6m
// Find the Length of the Loop
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
      if(head == NULL ||  head->next == nullptr){
          return 0;
      }
    //   Tortoise algorithm uses fast and slow pointers
    Node*fast = head;
    Node*slow = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){  // here we get possiblity of loop
            int cnt = 1;         // one fast node is counted
            fast = fast->next; // move only fast
            while(fast != slow){           // gives length of the loop
                fast = fast->next;   // increase cnt untill it come back to slow
                cnt++;
            }
            return cnt;
        }
    }
       return 0;
    }
};




❓ Q2: https://leetcode.com/problems/palindrome-linked-list/ 
// Palindrome Linked list
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*temp = head;
        vector<int> arr;              // taking arr to store val of linked list
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0,j = arr.size()-1;                 // check the arr is palindrome or not
        while(i<=j){
            if(arr[i] != arr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
