// 125. Valid Palindrome
#include <iostream>
#include <string>
using namespace std;

/*
  A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

  Given a string s, return true if it is a palindrome, or false otherwise.
*/

int main()
{
  string s = "A man, a plan, a canal: Panama";
  bool res = false;
  /* BEST SOLUTION
  By reading the question you may think that first we need to convert the string to desired form and then check if its a valid palindrome or not. But all of that is just distraction you can check valid palindrome by simply using two pointers no need to convert.

  */
  int start = 0;
  int end = s.size() - 1;
  while (start <= end)
  {
    if (!isalnum(s[start]))
    {
      start++;
      continue;
    }
    if (!isalnum(s[end]))
    {
      end--;
      continue;
    }
    if (tolower(s[start]) != tolower(s[end]))
      res = false;
    else
    {
      start++;
      end--;
    }
  }
  res = true;
  cout << res << endl;

  // MY SOLUTION

  // int len = s.size();
  // string newStr;

  // // Remove all alphanumeric chars (spaces, commas, colons)
  // // Convert all characters to lowercase
  // for ( int i = 0; i < len; i++)
  // {
  //   // check if character is alpha num
  //   if (isalnum(s[i]))
  //   {
  //     // Convert all characters to lowercase
  //     newStr += tolower(s[i]);
  //   }
  // }

  // // copy newStr to s
  // s = newStr;
  // // update s size
  // len = s.size();
  // // declare return value
  // bool res = true;

  // // check if palindrome
  // for (int i = 0; i < len/2; i++)
  // {
  //   if (s[i] != s[len-1-i]) {
  //     res = false;
  //     break;
  //   }
  // }

  // cout << s << endl;
  // cout << "RES: " << res << endl;

  return 0;
}