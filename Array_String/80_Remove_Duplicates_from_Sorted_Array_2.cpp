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

      if (nums[i] == nums[i-1] && counter == 0)
      {
        counter++;
        j++;
      }

      if (nums[i] != nums[i - 1])
      {
        nums[j] = nums[i];
        j++;
        counter = 0;
      }
  }



  // Print nums array in console
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i];
  }
  cout << endl;
  cout << j;


  return 0;
}
