// 274. H-Index
/*
  Input: citations = [3,0,6,1,5]
  Output: 3
  Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had 
  received 3, 0, 6, 1, 5 citations respectively.
  Since the researcher has 3 papers with at least 3 citations each and the remaining two 
  with no more than 3 citations each, their h-index is 3.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
  // Given Input
  vector<int> citations = {3,0,6,3,5};
  // Output
  int hIndex = 0;
  // citations vector length
  int len = citations.size();
  // int i for keeping count
  int i = 0;
  // sort citations in decending order
  sort(citations.begin() , citations.end());

  for (i = 1; i <= len; i++)
  {
    if (citations[len-i] < i)
    {
      break;
    }
  }
  hIndex = i-1;
  cout << hIndex << endl;
  

  return  0;
}