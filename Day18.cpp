// valid anagram
// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};

// longest common preffix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0 ; i<strs[0].length() ; i++){
            bool found =  true;
          for(int j = 1 ; j<strs.size() ; j++){
                if(strs[j][i] != strs[0][i]){
                    found = false;
                    break;
                }
             }  
             if(found){
                ans += strs[0][i];
             }    
              else{
                break;
              }
                     }
        return ans;
    }
};
