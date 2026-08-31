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

TEST(SolutionTest, test4) {
  Solution solution;
  vector<int> nums = {0,2,0};
  vector<int> expectOutput  = {0,0,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test5) {
  Solution solution;
  vector<int> nums = {2,0,2};
  vector<int> expectOutput  = {0,2,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test6) {
  Solution solution;
  vector<int> nums = {1,0};
  vector<int> expectOutput  = {0,1}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test7) {
  Solution solution;
  vector<int> nums = {0,1,0};
  vector<int> expectOutput  = {0,0,1}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test8) {
  Solution solution;
  vector<int> nums = {1,0,1};
  vector<int> expectOutput  = {0,1,1}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test9) {
  Solution solution;
  vector<int> nums = {2,1,0};
  vector<int> expectOutput  = {0,1,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test10) {
  Solution solution;
  vector<int> nums = {2,0,2,1};
  vector<int> expectOutput  = {0,1,2,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test13) {
  Solution solution;
  vector<int> nums = {2,1};
  vector<int> expectOutput  = {1,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test14) {
  Solution solution;
  vector<int> nums = {1,2,1};
  vector<int> expectOutput  = {1,1,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test12) {
  Solution solution;
  vector<int> nums = {2,2,1,1};
  vector<int> expectOutput  = {1,1,2,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test11) {
  Solution solution;
  vector<int> nums = {2,0,2,1,1};
  vector<int> expectOutput  = {0,1,1,2,2}; 

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

TEST(SolutionTest, example2) {
  Solution solution;
  vector<int> nums = {2,0,1};
  vector<int> expectOutput  = {0,1,2}; 

  solution.sortColors(nums);
  int size = nums.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(nums[i], expectOutput[i]);
  }
}

