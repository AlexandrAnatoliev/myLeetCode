#include <vector>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int size = nums.size();
      int cnt = 1;
      int tmp = nums[0];
      for (int i = 0; i < size; i++) {
        if (nums[i] != tmp) {
          cnt++;
          tmp = nums[i];
        }
      }
      return cnt;
    }
};
