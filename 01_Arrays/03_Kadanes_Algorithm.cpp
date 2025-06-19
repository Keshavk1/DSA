/*  THE KADANE’S TEMPLATE — “Think Like This”
       When the problem says :

      "Find the maximum sum of any subarray (contiguous)"

      You apply Kadane's when:

      Elements can be positive/negative
      You are not allowed to skip elements randomly(must be contiguous)
      You want to maximize something over a range
*/

/*
🔄 Apply This to Similar Questions
| Problem Variation                    | How to Use Kadane                    |
| ------------------------------------ | ------------------------------------ |
| 🔹 Max Sum Subarray                  | Basic Kadane                         |
| 🔹 Max Product Subarray              | Use similar idea but with min & max  |
| 🔹 Max Circular Subarray             | Use Kadane twice — normal + inverted |
| 🔹 Count subarrays with positive sum | Modify condition to track indices    |
| 🔹 Return the subarray, not just sum | Track start & end indices in loop    |

*/


#include<iostream>
#include<vector>
using namespace std;
// Problem  :- MAX SUM SUBARRAY
class Solution
{
public:
 int maxSubArray(vector<int> &nums)
 {
  int curMax = 0, maxTillNow = INT_MIN;
  for (auto c : nums)
   curMax = max(c, curMax + c),
   maxTillNow = max(maxTillNow, curMax);
  return maxTillNow;
 }
};


