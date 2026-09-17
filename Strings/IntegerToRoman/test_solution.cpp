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

TEST(SolutionTest, test1) {
  Solution solution;
  int num = 1;
  string expectOutput  = "I"; 

  string output = solution.intToString(num);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test2) {
  Solution solution;
  int num = 1234;
  int expectOutput  = 3; 

  int output = solution.getNumPow(num);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test3) {
  Solution solution;
  int num = 1234;
  int expectOutput  = 1000; 

  int output = solution.getMaxNum(num);
  EXPECT_EQ(output, expectOutput);
}
