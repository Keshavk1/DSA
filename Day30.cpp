📅 *Schedule for day30:*

❓ Q1: https://leetcode.com/problems/sort-list/
// sorting of list
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode*temp  = head;
        vector<int>vec;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        sort(vec.begin(),vec.end());
        int i = 0;
        temp = head;
        while(i<vec.size() && temp){
             temp->val = vec[i];
             i++;
             temp = temp->next;
        }
        return head;
    }
};


❓ Q2: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Remove a node from the linked list
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0 ; 
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int k = len-n+1;
        if(k == 1){
            head = head->next;
            return head;
        }
        int cnt = 0 ;
        ListNode* knode = head;
        ListNode* prev = nullptr;
        while(knode->next != nullptr){
            cnt++;
            if(cnt == k){
                prev->next = knode->next;
                delete(knode);
                return head;
            }
            prev = knode;
            knode = knode->next;
        }
        if(knode->next == nullptr){
            prev->next = knode->next;
            delete(knode);
            return head;
        }
        return head;
    }
};
