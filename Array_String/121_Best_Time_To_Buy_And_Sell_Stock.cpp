// 121. Best Time to Buy and Sell Stock I
#include <iostream>
#include <vector>

using namespace std;

/*  
  You want to maximize your profit by choosing a single day to buy one stock and choosing a
  different day in the future to sell that stock.
  Return the maximum profit you can achieve from this transaction. 
  If you cannot achieve any profit, return 0.
*/

int main () {
  vector<int> prices = {7,1,5,3,6,4};
  // Output: 5
  // Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

  // My Implementation
  // FAILED last few test cases due to runtime
  // int maxprof = 0;
  // int len = prices.size();
  // for (int i = 0; i < len; i++) {
  //   for (int j = i+1; j < len; j++) {
  //     if ((prices[j]-prices[i]) > maxprof) {
  //       maxprof = (prices[j]-prices[i]);
  //     }
  //   }
  // }

  // Solution 
  // Time complexity: O(n)
  // Space complexity: O(1)
  int min_price = prices[0];
  int maxprof = 0;
  for(int i=1;i<prices.size();i++){
      // tracking max prof between minimum price and current price
      maxprof = max(maxprof,prices[i]-min_price);

      // tracking minimum value
      min_price = min(prices[i],min_price);
  }


  cout << maxprof << endl;
  return 0;
}