#include <string>
#include <array>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
      return false;
    }

    array<int, 26> getLettersCount(string s) {
      array<int, 26> arr = {0};
      for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 97]++;
      }
      return arr;
    }
};
