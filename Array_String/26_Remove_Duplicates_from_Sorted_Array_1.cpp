// 26. Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> nums = {1,1,2,2,3}; 

  // My solution
  // Time complexity: O(n)
  // Space complexity: O(1)
  // int prevNum = nums[0];
  // for (int i = 1; i < nums.size(); i++)
  // {
  //   while (nums[i] == prevNum)
  //   {
  //     if(nums.size() <= i){
  //       break;
  //     }
  //     nums.erase(nums.begin()+i);
  //   }
  //   prevNum = nums[i];
  // }
  // int k = nums.size();
  // cout << "k = " << k << endl;


  // Online solution
  // Time complexity: O(n)
  // Space complexity: O(1)
  /*
    1,1,2,2,3 - j=1
    1,1,2,2,3 - j=1, i=1
    1,2,2,2,3 - j=2, i=2
    1,2,3,2,3 - j=2, i=3
  */
  int j = 1;
  for(int i = 1; i < nums.size(); i++){
      if(nums[i] != nums[i - 1]){
          nums[j] = nums[i];
          j++;
      }
  }
  // return j
  cout << "j = " << j << endl;
  
  
  // Print nums array in console
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i];
  }
  cout << endl;

  return 0;
}
