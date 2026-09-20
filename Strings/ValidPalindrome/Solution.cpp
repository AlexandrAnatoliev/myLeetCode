#include <string>
#include <cctype>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
      return false;
    }

  public:
    string toLowerCase(string s) {
      string sLow = "";
      int size = s.length();
      for(int i = 0; i < size; i++) {
        if(isupper(s[i])) {
          sLow += (char)tolower(s[i]);
        } else {
          sLow += s[i];
        }
      }
      return sLow;
    }

  public:
    string removeNonAlpha(string s) {
      string sAlpha = "";
      int size = s.length();
      for(int i = 0; i < size; i++) {
        if(isalpha(s[i])) {
          sAlpha += s[i];
        }
      }
      return sAlpha;
    }
};
