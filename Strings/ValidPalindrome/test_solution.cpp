#include <gtest/gtest.h>
#include <string>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  string s = "A man, a plan, a canal: Panama";
  bool expectOutput  = true; 

  bool output = solution.isPalindrome(s);
  EXPECT_EQ(output, expectOutput);
}

