#include <vector>
using namespace std;

class Solution {
  public:
    void sortColors(vector<int>& nums) {
      int size = nums.size();
      int ptr0 = 0;
      int ptr1 = 0;
      int ptr2 = size - 1;
      int temp;

      while(ptr0 < ptr2 && ptr1 < ptr2) {
        if(nums[ptr0] > nums[ptr2]) {
          temp = nums[ptr0];
          nums[ptr0] = nums[ptr2];
          nums[ptr2] = temp;
        } else if(nums[ptr0] > nums[ptr1]) {
          temp = nums[ptr0];
          nums[ptr0] = nums[ptr1];
          nums[ptr1] = temp; 
        } else if(ptr0 >= ptr1) {
          ptr1++;
        } else if(nums[ptr0] == 0) {
          ptr0++;
        } else if(nums[ptr1] == 1) {
          ptr1++;
        } else if(nums[ptr2] == 2) {
          ptr2--;
        }
      }
    }
};
