📅 *Schedule for day24:*

❓ Q1: https://leetcode.com/problems/push-dominoes/description/?envType=problem-list-v2&envId=string
❓ Q2: https://leetcode.com/problems/partition-labels/description/?envType=problem-list-v2&envId=string

2. Partition Labels
// code :-
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[26] = {0};
        for(int i = 0; i<s.length() ; i++){
            hash[s[i]-'a'] = i;                    // give the last occrence
        }
        vector<int> ans;
        int start  = 0, end = 0;
        for(int i = 0; i<s.length(); i++){
            end = max(end,hash[s[i]-'a']);        // updating last occurence according to s[i]
           if(i == end){                          // complete all occrences of all letters
            ans.push_back(i-start+1);    //  size of that part
            start = i+1;                   // updating start for next size
           }
        }
        return ans;
    }
};



1. Push Dominos
