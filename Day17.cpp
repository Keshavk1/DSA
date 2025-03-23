// Isomorphic Strings
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int checkStoT[256] ;  // giving arrray for s.c. and 256 represents all characters
        // S to T assign of characters from s to t
        int checkTtoS[256] ;
        for(int i = 0 ; i<256 ; i++){
            checkStoT[i] = -1;
            checkTtoS[i] = -1;
        }
        // yha mapping se check kr rhe hai sbki mapping shi tho true
        for(int i = 0 ; i<s.length() ; i++){
           if(checkStoT[s[i]] == -1){   // basse condition
            if(checkTtoS[t[i]] != -1 && checkTtoS[t[i]] != s[i]){      // checking connection
                return false;
            }
             checkStoT[s[i]] = t[i];               // connect  s and t 
             checkTtoS[t[i]] = s[i];
           }
              else if (checkStoT[s[i]] == t[i]){
                continue;                                     //checking for the ti mapping is already correct
            }
        else{
            return false;
        }
        }
        return true;              // return true at the end everything map is correct
    }
};



// Remove outermost parenthesis
class Solution {
public:
    string removeOuterParentheses(string s) {
        int lev = 0 ;                               // lev represents the inner parenthesis
        string ans = "";
        for(int i =0 ; i<s.length() ; i++){
            if(s[i] == '(') {
                lev++;
            }
            if(lev> 1) {
                ans += s[i];
            }
            if(s[i] == ')') {
                lev--;
            }
        }
        return ans;
    }
};
