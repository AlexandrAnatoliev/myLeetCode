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

TEST(SolutionTest, example2) {
  Solution solution;
  vector<int> numbers = {2,3,4};
  int target = 6;
  vector<int> expectOutput  = {1,3}; 

  vector<int> output = solution.twoSum(numbers, target);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

TEST(SolutionTest, example3) {
  Solution solution;
  vector<int> numbers = {-1,0};
  int target = -1;
  vector<int> expectOutput  = {1,2}; 

  vector<int> output = solution.twoSum(numbers, target);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test4) {
  Solution solution;
  vector<int> numbers = {5,25,75};
  int target = 100;
  vector<int> expectOutput  = {2,3}; 

  vector<int> output = solution.twoSum(numbers, target);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}
