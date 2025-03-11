// Rearrange Array Elements by sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posi = 0, neg = 1;
        vector<int> result(nums.size());
      for(int i = 0 ; i<nums.size() ; i++){
        if(nums[i]>=0){
            result[posi] = nums[i];
            posi+=2;
        }
        else{
            result[neg] = nums[i];
            neg+=2;
        }
      }
        return result;
    }
};

//Next permutation 
class Solution {
public:
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
      int ind =-1 ;
      for(int  i = n-2 ; i>=0 ; i--){
        if(nums[i]<nums[i+1]){
            ind = i;
            break;
        }
      }
      if(ind == -1 ){
        reverse(nums.begin(),nums.end());
      }
      else{
     for(int i = n-1 ; i>ind ; i--){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
     }
     reverse(nums.begin() + ind + 1, nums.end());
       }
     for(auto num : nums){
        cout<<num;
     }
    }
};

// Best time to Buy ans sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minprice = INT_MAX;
      int maxprofit = 0 ;
      for(int i = 0 ; i<prices.size() ; i++){
        minprice = min(minprice,prices[i]);
        maxprofit = max(maxprofit,prices[i]-minprice);
      }  
      return maxprofit;
    }
};
