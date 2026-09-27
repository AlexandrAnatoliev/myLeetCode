#include <string>
#include <array>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
      array<int, 26> arrS = getLettersCount(s);
      array<int, 26> arrT = getLettersCount(t);
      for (int i = 0; i < 26; i++) {
        if(arrS[i] != arrT[i]) {
          return false;
        }
      }
      return true;
    }

  public:
    array<int, 26> getLettersCount(string s) {
      array<int, 26> arr = {0};
      for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 97]++;
      }
      return arr;
    }
};
