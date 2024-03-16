#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main () {
  // Input
  string word1 = "abc", word2 = "pqr";
  // Output: "apbqcr"
  // Explanation: The merged string will be merged as so:
  // word1:  a   b   c
  // word2:    p   q   r
  // merged: a p b q c r
  string merged = "";
  int i = 0;
  
  while (i < word1.size() && i < word2.size()) {
    merged = merged + word1[i];
    merged = merged + word2[i];
    i++;
  }
  if (i < word1.size()) {
    merged = merged + word1.substr(i, word1.size());
  } else if (i < word2.size()) {
    merged = merged + word2.substr(i, word2.size());
  }

  cout << merged << endl;

  return 0;
};