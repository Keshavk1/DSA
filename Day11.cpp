// Pascal's triangle
class Solution {
private:
         vector<int> generaterow(int n ){
            vector<int>row;
             int i = 1;
             row.push_back(1);
            for(int col = 1; col<n ; col++){
                i *= (n-col);
                i/= (col);
                row.push_back(i);
            }
          return row;
         }
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> ans;
      for(int i = 1 ; i<=numRows ; i++){
        ans.push_back(generaterow(i));
      }  
      return ans;
    }
};


// ROTATE IMAGE 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n = matrix.size();
      int m = matrix[0].size();
    for(int i = 0 ; i<n-1 ; i++){                     // take of transpose
         for(int j = i+1 ; j<m ; j++){
            swap(matrix[i][j], matrix[j][i]);
         }
      }
      for(int i = 0 ; i<n ; i++){                              // reverse each row
        reverse(matrix[i].begin(), matrix[i].end());
      }
          for(int i = 0 ; i<n ; i++){
         for(int j = 0; j<m ; j++){
            cout<<matrix[i][j];                    // printing of matrix(rotated)
         }
      }
      
    }
};



// SPIRAL MATRIX
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m  = matrix[0].size();
        int left = 0 , right = m-1;
        int top = 0 , bottom = n-1;
        vector<int> ans;
        while(top<= bottom && left<=right){
            for(int i = left ; i<=right ; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top ; i<= bottom ; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
            for(int i = right ; i>=left ; i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){
            for(int i = bottom ; i>= top ; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
          return ans;
    }
};
