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

TEST(SolutionTest, test1) {
  Solution solution;
  char  ch = 'I';
  int expectOutput  = 1; 

  int output = solution.charToInt(ch);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, example2) {
  Solution solution;
  string s = "LVIII";
  int expectOutput  = 58; 

  int output = solution.romanToInt(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, example3) {
  Solution solution;
  string s = "MCMXCIV";
  int expectOutput  = 1994; 

  int output = solution.romanToInt(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test2) {
  Solution solution;
  string s = "M";
  int expectOutput  = 1000; 

  int output = solution.romanToInt(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test3) {
  Solution solution;
  string s = "MC";
  int expectOutput  = 1100; 

  int output = solution.romanToInt(s);
  EXPECT_EQ(output, expectOutput);
}
