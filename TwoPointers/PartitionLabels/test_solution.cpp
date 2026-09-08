#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
#include <string>
using namespace std;

TEST(SolutionTest, test1) {
  Solution solution;
  string s = "ababcc";
  vector<int> expectOutput  = {4,2}; 

  vector<int> output = solution.partitionLabels(s);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

