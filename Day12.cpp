// Bineary Search 
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low = 0 , high = nums.size()-1;
       while(low<=high){
        int mid  = (low+high)/2 ;
        if(nums[mid] == target) return mid;
        else if(nums[mid]>target) high = mid-1;
        else low = mid+1;
       } 
       return -1;
    }
};

// find first and last of an element
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int a = -1, b = -1;
       int i = 0,j = nums.size()-1;
         while(i<=j){
            if(nums[i] == target){
                a = i;
                break;
            }
            i++;
         }
      while(j>=i){
         if(nums[j] == target){
                b = j;
                break;
            }
            j--;
      }
      return {a,b};
    }
};


//  Search insert position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 1){
           if(target> nums[0]){
            return 1;
           }
           else{
            return 0;
           }
        }
                for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i; 
            }
            if (nums[i] > target) {
                return i; 
            }
        }

        return nums.size(); 
    }
};
