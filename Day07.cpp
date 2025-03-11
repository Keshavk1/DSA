// Can place flowers
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0){ return true; }
        int validPlaces = 0;
        for (int i = 0;i < flowerbed.size();i++){
            if (((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) && (flowerbed[i] == 0)){
                validPlaces++;
                flowerbed[i] = 1;
            }
        }
        if (validPlaces >= n){
            return true;
        }
        return false;
    }
};

//minimum positive sum subarray
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minisum = INT_MAX;
       for(int i = 0 ; i<n ; i++){
        int sum = 0 ;
        for(int j = i; j<n ; j++){
          sum += nums[j];
          if(j-i+1 >= l &&  j-i+1<= r && sum>0){
            if(sum>0){
                minisum = min(sum,minisum);
            }
          }
        }
       }
       if(minisum == INT_MAX) return -1;
       return minisum;
    }
};
