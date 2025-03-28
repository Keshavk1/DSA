📅 *Schedule for day23:*

❓ Q1: https://leetcode.com/problems/repeated-string-match/description/
❓ Q2: https://leetcode.com/problems/shortest-palindrome/description/

1. repeated string
// code :-
bool issubstring(string str,string b){
  // taking size of strings
    int n = str.size();
    int m = b.size();

    // loop till n-m times since after that if we check remain string it will less than b
  for(int i = 0; i<= n-m ; i++){
    int j = 0 ;
    // basic check j<m and  str[i+j] for the iteration i+j = i+0, i+1, i+2,,,
    while(j<m && str[i+j] == b[j]){
        j++;
    }
    // if substring
    if( j == m) return true;
  }
  return false;
}

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
      string ans = a;
      int count = 1;

      // firstly add till size of ans become equal or greater than b 
      while(ans.size()<b.size()){
        ans += a;
        count++;
      }

       if(issubstring(ans,b)){
        return count;
       }
       // if size become equal but in last of string elements not equal for that one more add
       ans += a;
       count++;

       // final check
       if(issubstring(ans,b)) return count;

       // not possible situation
       return -1;
    }
};


2. Shortest Palindrome
