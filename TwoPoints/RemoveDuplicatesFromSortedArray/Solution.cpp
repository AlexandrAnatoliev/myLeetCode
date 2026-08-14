#include <vector>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
      int size = nums.size();
      int cnt = 1;
      int tmp = nums[0];
      vector<int> sortNums = {};

      sortNums.push_back(tmp);

      for (int i = 0; i < size; i++) {
        if (nums[i] != tmp) {
          cnt++;
          tmp = nums[i];
          sortNums.push_back(tmp);
        }
      }

      nums = sortNums;
      return cnt;
    }
};
