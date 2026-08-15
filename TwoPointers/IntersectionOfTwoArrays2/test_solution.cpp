#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums1 = {1,2,2,1};
  vector<int> nums2 = {2,2};
  vector<int> expectOutput  = {2,2}; 

  vector<int> output = solution.intersect(nums1, nums2);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

