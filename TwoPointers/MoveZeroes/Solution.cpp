#include <vector>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int>& nums) {
      int ptr = 0;
      int size = nums.size();
      int cnt = 0;

      for(int i = 0; i < size; i++) {
        if(nums[i] == 0) {
          cnt++;
        } else {
          nums[i - cnt] = nums[i];
        }
      }

      for(int i = size - 1; cnt > 0; i--) {
        nums[i] = 0;
        cnt--;
      }
    }
};
