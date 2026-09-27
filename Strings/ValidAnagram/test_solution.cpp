#include <gtest/gtest.h>
#include <string>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  string s = "anagram";
  string t = "nagaram";
  bool expectOutput  = true; 

  bool output = solution.isAnagram(s,t);
  EXPECT_EQ(output, expectOutput);
}

