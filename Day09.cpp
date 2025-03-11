// two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        for(int i = 0 ; i<nums.size() ; i++){
          for( int  j = i+1 ; j<nums.size() ; j++){
                if(nums[i]+nums[j] == target){
                    a = i;
                    b = j ;
                    break ;
                }
          }
       
        }
        return {a,b};
    }
};

//sort colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = 0, m = 0 , l = 0 ;
       for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i] == 0){
            n++;
        }
        else if(nums[i] == 1){
            m++;
        }
        else if(nums[i] == 2){
            l++;
        }
       }
       int index = 0 ;
    for(int j = 0 ; j<n ; j++){
       nums[index] = 0 ;
       index++;
    }
       for(int k= 0 ; k<m ; k++){
        nums[index] = 1;
        index++;
    }
       for(int t = 0 ; t<l ; t++){
        nums[index] = 2;
        index++;
    }
    for(auto digit : nums){
        cout<<digit;
    }
    
    }
};


//
