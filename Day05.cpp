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

// DISTRIBUTE Money
class Solution {
public:
    int distMoney(int money, int children) {
        if (money < children)
            return -1; // Not enough money to give at least $1 to each child

        money -= children; // Give each child $1 first
        if (money / 7 == children && money % 7 == 0)//if we can distribute it equally
            return children;
        if (money / 7 == children - 1 && money % 7 == 3)
            return children - 2;
        return min(children - 1, money / 7);
    }
};
