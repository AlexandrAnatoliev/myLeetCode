#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums = {0,1,0,3,12};
  vector<int> expectOutput  = {1,3,12,0,0}; 

  solution.moveZeroes(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, example2) {
  Solution solution;
  vector<int> nums = {0};
  vector<int> expectOutput  = {0}; 

  solution.moveZeroes(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

