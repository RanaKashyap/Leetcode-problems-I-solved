// 122. Best Time to Buy and Sell Stock II
#include <iostream>
#include <vector>

using namespace std;

/* 
  You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
  On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time.
  However, you can buy it then immediately sell it on the same day.

  Find and return the maximum profit you can achieve.
*/

int main () {
  /*
    vector<int> prices = {7,1,5,3,6,4};
    Output: 7
    Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
    Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
    Total profit is 4 + 3 = 7.
  */
 // Linear Search
  vector<int> prices = {7,1,5,3,6,4};
  int profit = 0;

  for (int i = 0; i < prices.size() - 1 ; i++) {
    if (prices[i] < prices[i+1]) {
      profit += prices[i+1] - prices[i];
    }
  }


  cout << profit<< endl;
  return 0;
}