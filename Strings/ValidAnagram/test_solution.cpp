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

TEST(SolutionTest, test1) {
  Solution solution;
  string s = "a";
  int expectOutput[26] = {0}; 
  expectOutput[0] = 1;

  array<int, 26> output = solution.getLettersCount(s);
  for (int i = 0; i < 26; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

TEST(SolutionTest, example2) {
  Solution solution;
  string s = "rat";
  string t = "car";
  bool expectOutput  = false; 

  bool output = solution.isAnagram(s,t);
  EXPECT_EQ(output, expectOutput);
}
