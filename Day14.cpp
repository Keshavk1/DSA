// SQRT of a number :- 
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int low = 1, high = n;
        while(low<=high){
            int mid = low + (high-low)/2 ;
            long long midmul = mid*mid;
            long long greatermid  = (mid+1)*(mid+1);
            if(midmul<=n && greatermid>n){
                return mid;
            }
            else if(midmul>n){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
// approach :- binary search and check( ans*ans<=n  && (ans+1)*(ans+1)>n)

// KOKO EATING BANANAS
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(),piles.end());
        int low = 1;
        while(low<= high){
            int mid = low +(high - low)/2;
            long long totalhours = 0; 
            for(int i = 0 ; i<piles.size() ; i++){
               totalhours += ceil(double(piles[i])/double(mid));                 // sum of total hours
            } 
            if(totalhours <= h){
                high = mid-1;                    // move towards left
            }
            else{
                low = mid+1;                  // move towards right
            }
        }
        return low;
    }
};
// approach :- if maxi = 11 then it will give the answer but we want minimum by which we use binary search similar to find target in binary search



// FIND THE SMALLEST DIVISOR GIVEN A THRESHOLD
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = *max_element(nums.begin(),nums.end());
        while(low<= high){
            int mid = low + (high-low)/2;
            long long result = 0;
            for(int i = 0 ; i<nums.size() ; i++){
                 result += ceil(double(nums[i])/double(mid));     // for the ceil value we are using double
            }    
            if(result>threshold){
                low = mid+1;                      // if result greater than move towards right since divide by higher number give small result
            }
            else{
                high = mid-1;
            }
         }
         return low;
    }
};

// approach :- bineary search similar to koko eating bananas
