#include <gtest/gtest.h>
#include <string>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  string s = "III";
  int expectOutput  = 3; 

  int output = solution.romanToInt(s);
  EXPECT_EQ(output, expectOutput);
}

