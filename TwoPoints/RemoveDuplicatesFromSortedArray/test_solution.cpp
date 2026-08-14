#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums = {1,1,2};
  vector<int> expectedNums = {1,2};

  EXPECT_EQ(solution.removeDuplicates(nums), 2);
  int size = solution.removeDuplicates(nums);
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectedNums[i]);
  }
}
