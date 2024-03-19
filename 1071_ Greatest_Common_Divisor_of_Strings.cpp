#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


/*
  ONLINE SOLUTION
  string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
*/

int main () {
  string  str1 = "ABCABC", str2 = "ABC";
  int len1 = str1.size(), len2 = str2.size();
  string newStr1, newStr2;

  for (int l = min(len1, len2); l > 0; l--) {
    if (len1 % l == 0 && len2 % l == 0) {
      // find factor
      int f1 = len1/l , f2 = len2/l;

      for(int i = 1; i <= f2; i++){
        newStr1 = newStr1.append(str1);
      }
      for(int i = 1; i <= f1; i++){
        newStr2 = newStr2.append(str2);
      }

      if (newStr1.compare(newStr2) == 0) {
        cout << str1.substr(0,l) << endl;
        break;
      }
    }
  }

  cout << "if no output then no common string found" << endl;
  
  return 0;
};