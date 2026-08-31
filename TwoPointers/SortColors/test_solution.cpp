#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, test3) {
  Solution solution;
  vector<int> nums = {2,0};
  vector<int> expectOutput  = {0,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums = {2,0,2,1,1,0};
  vector<int> expectOutput  = {0,0,1,1,2,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

