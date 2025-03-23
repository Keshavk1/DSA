// Sort Characters according to frequencies
class Solution {
public:
    string frequencySort(string s) {
        int hash[62] = {0};  // lower(26) and upper(26) and digits(10)
     for(int i = 0 ; i<s.length() ; i++){
        if(s[i]>='a' && s[i]<='z'){
         hash[s[i]-'a']++; 
         }
        else if(s[i]>='A' && s[i]<='Z'){
            hash[s[i]-'A' + 26]++;
        }
        else{
            hash[s[i]-'0'+52]++;
        }
     }
     string ans = "";
     while(*max_element(hash,hash+62) > 0){
        int maximum = max_element(hash,hash+62) - hash; // hash - first element address
         if(maximum < 26){
            for(int i = 0 ; i<hash[maximum] ; i++){
                ans += char(maximum +'a');
            }
            hash[maximum] = 0;
         }
         else if(maximum < 52){
            for(int i = 0 ; i<hash[maximum] ; i++){
                ans += char(maximum+'A'-26);
            }
            hash[maximum] = 0;
         }
         else{
            for(int i = 0 ; i<hash[maximum] ; i++){
                ans += char(maximum+'0'-52);
            }
            hash[maximum] = 0;
                     }
     }
     return ans;
    }
};

// T.C. => O(N) 


// STRING TO INTEGER(ATOI)
//https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        bool start = false;
        bool sub = false;
        bool sign = false;
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] != ' ') && !(s[i] >= '0' && s[i] <= '9') && (s[i] != '-') && (s[i] != '+')) {
                return ans;
            }
            else if (s[i] == '-' || s[i] == '+' || (s[i] >= '0' && s[i] <= '9')) {
                start = true;
                if (s[i] == '-' || s[i] == '+') {
                    sign = true;
                }
                if (s[i] == '-') {
                    sub = true;
                }
            }
            if (start) {
                if (sign) {
                    i += 1;
                    sign = false;
                }
                while (i < s.length() && (s[i] >= '0' && s[i] <= '9')) {
                    if (ans > (INT_MAX - (s[i] - '0')) / 10) {
                        if (sub) {
                            return INT_MIN;
                        }
                        else {
                            return INT_MAX;
                        }
                    }
                   ans = ans * 10 + (s[i] - '0');
                    i++;
                }
                if (sub) {
                    return -ans;
                }
                return ans;
            }
        }
        return ans;
    }
};
