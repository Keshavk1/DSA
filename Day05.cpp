// longest palindrome 

class Solution {
public:
    int longestPalindrome(string s) {
        map <int,int> hash;
        for(int i = 0 ; i<s.length() ; i++){
            hash[s[i]-'0']++;
        }
        int cnt = 0;
        for(auto it : hash){
            if(it.second >= 2){
                cnt += it.second/2;
            }
        }
        if((cnt*2) == s.length()){
        return (cnt*2);
        }
        return (cnt*2)+1;
    }
};

// DISTRIBUTE MONEY :-
class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children){
            return -1;
        }
        money -= children;
        int count = 0;
        while (money >= 7 && children > 0) {
            money -= 7;
            count++;
            children--;
        }
        if (children == 1 && money == 3) {
            count--;
        }
        if (children == 0 && money > 0) {
            return count - 1;
        }
        return count;
    }
};
