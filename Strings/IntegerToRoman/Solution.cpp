#include <string>
using namespace std;

class Solution {
  public:
    string intToRoman(int num) {
      return "I";
    }

  public:
    int getNumPow(int num) {
      return 0;
    }

  public:
    string intToString(int n) {
      switch (n) {
        case 1:
          return "I";
        case 4:
          return "IV";
        case 5:
          return "V";
        case 9:
          return "IX";
        case 10:
          return "X";
        case 40:
          return "IL";
        case 50:
          return "L";
        case 90:
          return "XC";
        case 100:
          return "C";
        case 400:
          return "CD";
        case 500:
          return "D";
        case 900:
          return "CM";
        case 1000:
          return "M";
      }
      return 0;
    }
};
