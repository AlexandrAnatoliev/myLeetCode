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

TEST(SolutionTest, test1) {
  Solution solution;
  string s = "A man, a plan, a canal: Panama";
  string expectOutput  = "a man, a plan, a canal: panama"; 

  string output = solution.toLowerCase(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test2) {
  Solution solution;
  string s = "A man, a plan, a canal: Panama";
  string expectOutput  = "AmanaplanacanalPanama"; 

  string output = solution.removeNonAlpha(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test3) {
  Solution solution;
  string s = "qwerty";
  string expectOutput  = "ytrewq"; 

  string output = solution.toReverse(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, example2) {
  Solution solution;
  string s = "race a car";
  bool expectOutput  = false; 

  bool output = solution.isPalindrome(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, example3) {
  Solution solution;
  string s = " ";
  bool expectOutput  = true; 

  bool output = solution.isPalindrome(s);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test4) {
  Solution solution;
  string s = "OP";
  bool expectOutput  = false; 

  bool output = solution.isPalindrome(s);
  EXPECT_EQ(output, expectOutput);
}
