#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums1 = {1,2,3,0,0,0};
  int m = 3;
  vector<int> nums2 = {2,5,6};
  int n = 3;
  vector<int> output  = {1,2,2,3,5,6}; 

  solution.merge(nums1, m, nums2, n);
  for (int i = 0; i < n + m; i++) {
    EXPECT_EQ(nums1[i], output[i]);
  }
}

