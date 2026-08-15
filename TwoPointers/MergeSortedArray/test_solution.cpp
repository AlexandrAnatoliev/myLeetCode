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

TEST(SolutionTest, example2) {
  Solution solution;
  vector<int> nums1 = {1};
  int m = 1;
  vector<int> nums2 = {};
  int n = 0;
  vector<int> output  = {1}; 

  solution.merge(nums1, m, nums2, n);
  for (int i = 0; i < n + m; i++) {
    EXPECT_EQ(nums1[i], output[i]);
  }
}

TEST(SolutionTest, example3) {
  Solution solution;
  vector<int> nums1 = {0};
  int m = 0;
  vector<int> nums2 = {1};
  int n = 1;
  vector<int> output  = {1}; 

  solution.merge(nums1, m, nums2, n);
  for (int i = 0; i < n + m; i++) {
    EXPECT_EQ(nums1[i], output[i]);
  }
}

TEST(SolutionTest, test4) {
  Solution solution;
  vector<int> nums1 = {2,0};
  int m = 1;
  vector<int> nums2 = {1};
  int n = 1;
  vector<int> output  = {1,2}; 

  solution.merge(nums1, m, nums2, n);
  for (int i = 0; i < n + m; i++) {
    EXPECT_EQ(nums1[i], output[i]);
  }
}
