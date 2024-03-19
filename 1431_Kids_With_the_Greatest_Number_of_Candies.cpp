/*
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
*/

/*
  - Find max
  - add extra candies to each kid's candies to see if they either exceed or match the max.
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> greatestCandies(candies.size(), false);
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i]>max) {
                max = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >=  max) {
                greatestCandies[i] = true;
            }
            
        }
        return greatestCandies;
    }
}; 