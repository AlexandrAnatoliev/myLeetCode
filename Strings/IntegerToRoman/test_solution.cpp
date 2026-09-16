#include <gtest/gtest.h>
#include <string>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example2) {
  Solution solution;
  int num = 58;
  string expectOutput  = "LVIII"; 

  string output = solution.intToRoman(num);
  EXPECT_EQ(output, expectOutput);
}

