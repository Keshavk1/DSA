// Maximum Nesting Depth
class Solution {
public:
    int maxDepth(string s) {
        int lev = 0,maxi = 0 ;
        for(int i = 0 ; i<s.length(); i++){
            if(s[i] == '('){
                lev++;
            }
            else if(s[i] == ')'){
                maxi = max(lev,maxi);
                lev--;
            }
        }
        return maxi;
    }
};

// Roman to integer
class Solution{
    public :
int romanToInt(string str){
    int sum = 0 ;
    int n = str.length() ;
   for(int i = 0 ; i<n ;i++){
    if( str[i] == 'I' && str[i+1] =='V'){
         sum += 4;
         i++;
         continue;
    }
    else if( str[i] == 'X' && str[i+1] =='L'){
        sum += 40;
        i++;
            continue;
    }
    else if( str[i] == 'C' && str[i+1] =='D'){
         sum += 400; 
         i++;
             continue;
    }
        if( str[i] == 'I' && str[i+1] =='X'){
         sum += 9;
         i++;
             continue;
    }
    else if( str[i] == 'X' && str[i+1] =='C'){
        sum += 90;
        i++;
            continue;
    }
    else if( str[i] == 'C' && str[i+1] =='M'){
         sum += 900; 
         i++;
             continue;
    }
else{
    if(str[i] == 'I') sum += 1;
 else if(str[i] == 'V') sum += 5;
    else if(str[i] == 'X') sum += 10 ;
    else if(str[i] == 'L') sum += 50 ;
  else if(str[i] == 'C') sum += 100;
  else if(str[i] == 'D') sum += 500 ;
  else if(str[i] == 'M') sum += 1000;
} 
   }
return sum ;   

}
};

