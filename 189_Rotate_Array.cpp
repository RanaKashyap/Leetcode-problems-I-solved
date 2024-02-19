#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

using namespace std;

int main() {
  // INPUTS
  vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
  int k = 36;

  // LENGTH VECTOR
  int len = nums.size();

  // // BRUTE FORCE SOLUTION (Bad for big arrays and k values)
  // for (int l = 0; l < k; l++) {
  //     int currIndexVal = 0;
  //     int prevIndexVal = nums[len-1];
  //     for(int j = 0; j < len; j++) {
  //         currIndexVal = nums[j];
  //         nums[j] = prevIndexVal;
  //         prevIndexVal = currIndexVal;
  //     }
  // }
  
  // // MY FASTER SOLUTION
  // // Time complexity: O(N)
  // // Space complexity: O(N)
  // vector<int> nums2 = nums;
  // for (int i = 0; i < len; i++)
  // {
  //   nums2[(i+k)%len] = nums[i];
  // }
  // nums = nums2;

  // RECOMMENDED SOLUTION
  // Time complexity: O(N)
  // Space complexity: O(1)
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << ",";
  }
  cout<<endl;


  // Mod k size with size of nums
  k=k%nums.size();
  
  // Reverse values from index 0 to nums size - k 
  reverse(nums.begin(),nums.begin()+(nums.size()-k));

  // Reverse the values from index num size - k to last index
  reverse(nums.begin()+(nums.size()-k),nums.end());

  // Reverse the whole nums from first to last index
  reverse(nums.begin(),nums.end());

  return 0;
}