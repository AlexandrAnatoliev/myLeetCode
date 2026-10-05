#include <gtest/gtest.h>
#include <string>
#include <vector>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  string s = "PAYPALISHIRING"; 
  int numRows = 3;
  string expectOutput  = "PAHNAPLSIIGYIR"; 

  string output = solution.convert(s, numRows);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test1) {
  Solution solution;
  string s = "PAYPALISHIRING"; 
  int numRows = 3;
  vector<vector<char>> expectOutput(7, vector<char>(3,0)); 
  expectOutput[0] = {'P', 'A', 'H'};
  expectOutput[1] = {0, 'N', 0};
  expectOutput[2] = {'A', 'P', 'L'};
  expectOutput[3] = {0, 'S', 0};
  expectOutput[4] = {'I', 'I', 'G'};
  expectOutput[5] = {0, 'Y', 0};
  expectOutput[6] = {'I', 'R', 0};

  vector<vector<char>> output = solution.stringToArray(s);
  EXPECT_EQ(output, expectOutput);
}
