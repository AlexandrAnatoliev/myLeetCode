#include <string>
using namespace std;

class Solution {
  public:
    int romanToInt(string s) {
      int size = s.size();
      int answer = charToInt(s[size - 1]);

      for (int i = 0; i < size - 1; i++) {
        int num = charToInt(s[i]);
        int next = charToInt(s[i + 1]);
        if (num >= next) {
          answer += num;
        } else {
          answer -= next;
        }
      }
      return answer;
    }

  public:
    int charToInt(char ch) {
      switch (ch) {
        case 'I':
          return 1;
        case 'V':
          return 5;
        case 'X':
          return 10;
        case 'L':
          return 50;
        case 'C':
          return 100;
        case 'D':
          return 500;
        case 'M':
          return 1000;
      }
      return 0;
    }
};
