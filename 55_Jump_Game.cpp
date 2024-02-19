#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector<int> nums = {1,2,3};
  bool res = false;
  int goal = nums.size()-1;
  // int n = nums.size();
  // int reach = 0;
  // for (int i = 0; i < n; i++) {
  //     cout << i << " " << reach << endl;
  //     if(i > reach || reach >= n-1) {
  //         break;
  //     }
  //     reach = max(reach, i + nums[i]);
  // }
  // if (reach >= n-1){
  //   res = true;
  // }

  for (int i = nums.size()-2; i >= 0; i--) {
    if (i + nums[i] >= goal) {
      goal = i;
    }
  }
  
  if (goal == 0) {
    res = true;
  }
  


  cout << "res " << res << endl;
  return 0;
}