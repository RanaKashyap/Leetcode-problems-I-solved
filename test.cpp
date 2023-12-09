#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>  

using namespace std;

int main() {
  // Find size of an array
  int nums[] = {1,2,3,4,5,6};
  int len = sizeof(nums)/sizeof(nums[0]);
  // printf("%d", len);

  // int currIndexVal = 0;
  // int prevIndexVal = nums[len-1];
  // for(int j = 0; j < len; j++) {
  //     currIndexVal = nums[j];
  //     nums[j] = prevIndexVal;
  //     prevIndexVal = currIndexVal;
  // }

  // for (int k = 0; k < 3; k++) {
  //           int currIndexVal = 0;
  //           int prevIndexVal = nums[len-1];
  //           for(int j = 0; j < len; j++) {
  //               currIndexVal = nums[j];
  //               nums[j] = prevIndexVal;
  //               prevIndexVal = currIndexVal;
  //           }
  //       }
  // for (int i = 0; i < len; i++)
  // {
  //   printf("%d", nums[i]);
  // }

  // int x = 1;
  // while (x<=10)
  // {
  //   cout << x << endl;
  //   x++;
  // }
  
  
  return 0;
}