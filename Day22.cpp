// Minimum Add to Make Parentheses valid

class Solution {
public:
    int minAddToMakeValid(string s) {
      int cnt1 = 0,cnt2 = 0;
      for(int i = 0 ; i<s.length() ; i++){
        if(s[i] == '(') cnt1++;
        else{
            if(cnt1 <= 0){
                cnt2++;
            }
            else{
                cnt1--;
            }
        }
      }
      return cnt1+cnt2;
    }
};

// Sum of beauty of all substrings 
class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i = 0 ; i<s.length() ; i++){
            int freq[26] = {0};
            for(int j = i ; j<s.length() ; j++){
                freq[s[j]-'a']++;
               int maxi = 0 , mini = INT_MAX;
               for(int k = 0 ; k<26 ; k++){
                if(freq[k] >0){
                    maxi = max(maxi,freq[k]);
                    mini = min(mini,freq[k]);
                }
               }
            
            sum += (maxi-mini);
            }
        }
        return sum;
    }
};
