#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& numbers,
        int target) {
      vector<int> output = {0,0};
      int size = numbers.size();
      int ptr1 = 0;
      int ptr2 = size - 1;

      while (ptr1 < ptr2) {
        if (numbers[ptr1] + numbers[ptr2] == target) {
          output[0] = ptr1 + 1;
          output[1] = ptr2 + 1;
          break;
        } else if (numbers[ptr1] + numbers[ptr2] < target) {
          ptr1++;
        } else {
          ptr2--;
        }
      }
      return output;
    }
};
