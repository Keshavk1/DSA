// K-th element of two Arrays

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<int> result;
        int i = 0,j=0;
        while(i<n && j<m){
            if(a[i]<=b[j]){
                result.push_back(a[i]);
                i++;
            }
            else{
                result.push_back(b[j]);
                j++;
            }
           
        }
        while(i<n){
            result.push_back(a[i]);
            i++;
        }
        while(j<m){
            result.push_back(b[j]);
                 j++;
        }
        return result[k-1];
    }
};

// approach :- merge sort  T.C. => O(N+M)
// another approach binary search




// SEARCH A 2D MATRIX
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0,bottom = n-1;
        int row = 0;
 // for the required row
        while(top<=bottom){
            int mid  = top + (bottom-top)/2;
            if(matrix[mid][0] == target){
                return true;
            }
            else if(matrix[mid][0]>target){
                bottom = mid-1;
            }
            else if(matrix[mid][0]<target && matrix[mid][m-1]>=target){
                row = mid;
                break;
            }
            else{
                top = mid+1;
            }
        }
      // for the required column
        int first = 0,last = m-1;
        while(first<=last){
            int mid = first + (last-first)/2;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid]>target){
                last = mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return false;
    }
};

// T.C. => O(log(m*n)) , S.C. => O(1)

// SEARCH  A 2D MATRIX ||
// BRUTE
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          for(int i = 0 ; i<matrix.size() ; i++){
            int low = 0 , high= matrix[0].size()-1;
            while(low<=high){
                int mid = low + (high-low)/2; 
                if(matrix[i][mid] == target){
                    return true;
                }
                else if(matrix[i][mid]>target){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
          }
          return false;
    }
};

//OPTIMAL
 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                 i++;
            }
        }
        return false;
    }
};

// approach :- moving left if the current element is greater than the target and moving down if it is smaller, since sorted


