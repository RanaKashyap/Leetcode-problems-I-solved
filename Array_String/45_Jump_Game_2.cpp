#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  // BFS APPROACH
  vector<int> nums = {2,3,1,1,4,5,6};
  // vector<int> nums = {1,2,3};
  int res = 0;
  int left = 0, right = 0;
  int goal = nums.size()-1;
  
  while (right < goal) {
    int farthest = 0;
    for (int i = left; i < right+1; i++) {
      farthest = max(farthest, i + nums[i]);
    }
    
    left = right + 1;
    right = farthest;
    res++;
  }

  cout << "jumps " << res << endl;
  return 0;
}