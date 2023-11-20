#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// MY SOLUTION
int majorityElement(vector<int>& nums) {

    // DECLARE UNORDERED MAP
    unordered_map<int, int> umap; 

    // DECLARE LENGTH OF nums
    int len = nums.size();

    // Iterate through each element in nums
    // If element has not been added to the map
    // then add it to the map with nums[i] as key and 0 as value
    // Afterwards, add 1 to the value.
    // If value of the element is more than (len+1)/2 then return the element
    for (int i = 0; i < len; i++) {
        if (umap.find(nums[i]) == umap.end()) {
            umap[nums[i]] = 0;
        }
        umap.find(nums[i])->second = umap.find(nums[i])->second + 1;
        if (umap.find(nums[i])->second == (len+1)/2) {
            return umap.find(nums[i])->first;
        }
    }
    
    return 0;
}

// MAIN FUNCTION
int main() {
  // TEST CASE
  // Input: [3,2,3]
  // Expected output: 3
  vector<int> vect{ 3,2,3}; 

  // Print majority element
  cout << majorityElement(vect) << endl;

  return 0;
}

