#include <gtest/gtest.h>
#include "Solution.cpp"
#include <vector>
#include <string>
using namespace std;

TEST(SolutionTest, test2) {
  Solution solution;
  char letter1 = 'a';
  int expectOutput1  = 0; 
  char letter2 = 'b';
  int expectOutput2  = 1; 

  int output1 = solution.getLetterIndex(letter1);
  EXPECT_EQ(output1, expectOutput1);
  int output2 = solution.getLetterIndex(letter2);
  EXPECT_EQ(output2, expectOutput2);
}

TEST(SolutionTest, test3) {
  Solution solution;
  string s = "ababcc";
  vector<int> expectOutput  = {2,2,2}; 

  vector<int> output = solution.getLetterCount(s);
  int size = expectOutput.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}

TEST(SolutionTest, test4) {
  Solution solution;
  string s = "ababcc";
  int expectOutput1  = 4; 
  int expectOutput2  = 2; 
  vector<int> letterCount = {2,2,2};

  int output1 = solution.getLabelLength(
      s,letterCount,0);
  EXPECT_EQ(output1, expectOutput1);

  int output2 = solution.getLabelLength(
      s,letterCount,4);
  EXPECT_EQ(output2, expectOutput2);
}

TEST(SolutionTest, test1) {
  Solution solution;
  string s = "ababcc";
  vector<int> expectOutput  = {4,2}; 

  vector<int> output = solution.partitionLabels(s);
  int size = expectOutput.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }
}



