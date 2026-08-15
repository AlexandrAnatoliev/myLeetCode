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

TEST(SolutionTest, example2) {
  Solution solution;
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
  vector<int> expectedNums = {0,1,2,3,4};

  EXPECT_EQ(solution.removeDuplicates(nums), 5);
  int size = solution.removeDuplicates(nums);
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectedNums[i]);
  }
}
