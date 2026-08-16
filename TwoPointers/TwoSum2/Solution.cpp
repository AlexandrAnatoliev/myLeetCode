#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& numbers,
        int target) {
      vector<int> output = {0,0};
      int ptr1 = 0;
      int ptr2 = 1;
      int size = numbers.size();

      while (ptr2 < size && ptr1 < size - 1) {
        if (ptr1 == ptr2) {
          ptr2++;
        } else if (numbers[ptr1] + numbers[ptr2] == target) {
          output[0] = ptr1 + 1;
          output[1] = ptr2 + 1;
          break;
        } else if (ptr2 >= size - 1) {
          ptr1++; 
        } else if (numbers[ptr1] + numbers[ptr2] < target) {
          ptr2++;
        } else {
          ptr1++;
        }
      }
      return output;
    }
};
