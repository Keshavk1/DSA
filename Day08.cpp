// Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0 ;
        for(int i = 0; i<n ;i++){
            if(nums[i] != 0 ){
                 nums[index++] = nums[i];
            }
        }
        while(index<n){
          nums[index++] = 0;
        }
        for(auto digit : nums){
            cout<<digit;
        }
    }
};


// Rotate array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
      k = k%n ;  /**/
      reverse(nums.begin(),nums.begin()+n-k);
      reverse(nums.begin()+n-k , nums.end());
      reverse(nums.begin(),nums.end());
    }
};
