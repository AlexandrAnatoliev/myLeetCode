#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> nums = {1,1,2};
  EXPECT_EQ(solution.removeDuplicates(nums), 2);
}
