/*
Given an integer array nums, return an array answer such that 
answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
// https://www.youtube.com/watch?v=bNvIQI2wAjk
#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> nums = {1,2,3,4};
  vector<int> res (nums.size(), 1);
  
  int product = 1;
  for (int i = 0; i < nums.size()-1; i++)
  { 
    product *= nums[i];
    res[i+1] *= product;
  }
  
  product = 1;
  
  for (int i = res.size()-2, j = nums.size()-1; i >= 0; i--,j--)
  { 
    product *= nums[j];
    res[i] *= product;
  }


  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }

  return 0;
}