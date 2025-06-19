/*
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/description/
Approach: 
 1. One brute force approach is to consider every pair of elements and check if their sum equals the target. This can be done using nested loops, where the   outer loop iterates from the first element to the second-to-last element, and the inner loop iterates from the next element to the last element. However, this approach has a time complexity of O(n^2).
 2. A more efficient approach is to use a hash table (unordered_map in C++). We can iterate through the array once, and for each element, check if the target minus the current element exists in the hash table. If it does, we have found a valid pair of numbers. If not, we add the current element to the hash table.
*/

#include <bits/stdc++.h>
using namespace std;


// Brute force
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};



// optimal Approach
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (mpp.count(complement))
            {
                return {mpp[complement], i}; // return indexes
            }
            mpp[nums[i]] = i; // storing indexes
        }
        return {}; // No solution
    }
};