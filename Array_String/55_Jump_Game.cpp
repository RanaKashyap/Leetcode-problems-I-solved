#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> nums = {1,2,3};
  bool res = false;
  int n = nums.size();
  int reach = 0;
  for (int i = 0; i < n; i++) {
      if(i > reach || reach >= n-1) {
          break;
      }
      reach = max(reach, i + nums[i]);
  }
  if (reach >= n-1){
    res = true;
  }

  //this "return false" means definitely (i > reach) at any point
  // res = false;
  return 0;
}