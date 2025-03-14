 //  Ceil The Floor
int floor(vector<int>&a , int n , int x){
	int low = 0 , high = n-1;
	int ans = -1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(a[mid] <= x){
            ans = a[mid];
		    low = mid+1;
		}
		else{
			high = mid-1;
		}

	}
	return ans;
}

int ceil(vector<int>&a , int n , int x){
  int low = 0 , high = n-1;
  int ans = -1;
  while(low<=high){
	  int mid = low + (high-low)/2;
	  if(a[mid] >= x){
         ans = a[mid];
		 high = mid-1;
	  }
	  else{
		  low = mid+1;
	  }
  }
  return ans;
 
}


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int floorvalue = floor(a,n,x);
	int ceilvalue  = ceil(a,n,x);
	return {floorvalue,ceilvalue};
}



//  https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& nums) {
     int low = 0 , high = nums.size()-1 , ans = INT_MAX;
     while(low<=high){
        int mid = low + (high-low)/2 ;
        if(nums[low] <= nums[mid]){
            ans = min(ans,nums[low]);
            low = mid+1;    // elemenate left part
        }
        else{
            ans = min(ans,nums[mid]);
            high = mid -1;         // eliminate right part
        }
     }  
     return ans; 
    }
};



//Search in rotated sorted array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2 ;
            if(nums[mid] == target) return mid ;
            if(nums[mid] >= nums[low]){
                if(nums[mid] >= target && target>= nums[low]){ // is range mei hai ya nhi
                    high = mid-1; 
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid]<= target && target<= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }

        }
        return -1;
    }
};
