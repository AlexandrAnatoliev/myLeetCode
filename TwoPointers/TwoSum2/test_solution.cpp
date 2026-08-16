#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<int> numbers = {2,7,11,15};
  int target = 9;
  vector<int> expectOutput  = {1,2}; 

  vector<int> output = solution.twoSum(numbers, target);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

