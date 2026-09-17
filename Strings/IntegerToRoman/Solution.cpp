#include <string>
using namespace std;

class Solution {
  public:
    string intToRoman(int num) {
      int oneNum;
      string romanNum = "";
      while(num) {
        oneNum = getMaxNum(num);
        num -= oneNum;
        romanNum = romanNum + intToString(oneNum);
      }
      return romanNum;
    }

  public:
    int getMaxNum(int num) {
      int nums[] = { 1000, 900, 500, 400, 
        100, 90, 50, 40, 10, 9, 5, 4, 1};
      int size = sizeof(nums) - 1;
      for (int i = 0; i < size; i++) {
        if(num/nums[i]) {
          return nums[i];
        } 
      }
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
          return "XL";
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
      return "";
    }
};
