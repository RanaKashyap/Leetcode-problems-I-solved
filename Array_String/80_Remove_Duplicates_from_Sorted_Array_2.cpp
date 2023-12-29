// 80. Remove Duplicates from Sorted Array II
#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> nums = {0,0,1,1,1,1,2,3,3}; 
  int len = nums.size();

  // my solution
  int counter = 0;
  int j = 1;
  for(int i = 1; i < nums.size(); i++){

    if (nums[i] == nums[j-1] && counter == 0)
    {
      nums[j] = nums[i];
      counter++;
      j++;
    }

    if (nums[i] != nums[i - 1])
    {
      nums[j] = nums[i];
      counter = 0;
      j++;
    }
  }
  // return j;

  // online solution
  // int i =0;
  // for(auto ele : nums)
  // {
  //     if(i==0 || i==1 || nums[i-2] != ele)
  //     {
  //         nums[i] = ele;
  //         i++;
  //     }
  // }
  //  return i ;


  // Print nums array in console
  for (int k = 0; k < j; k++)
  {
    cout << nums[k];
  }
  cout << endl;
  cout << j;


  return 0;
}
