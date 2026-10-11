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
  string s = "PAHNAPLSIIGYIR"; 
  int cols = 3;
  vector<vector<char>> expectOutput(7, vector<char>(cols,0)); 
  expectOutput[0] = {'P', 'A', 'H'};
  expectOutput[1] = {0, 'N', 0};
  expectOutput[2] = {'A', 'P', 'L'};
  expectOutput[3] = {0, 'S', 0};
  expectOutput[4] = {'I', 'I', 'G'};
  expectOutput[5] = {0, 'Y', 0};
  expectOutput[6] = {'I', 'R', 0};

  vector<vector<char>> output = solution.stringToArray(s, cols);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test2) {
  Solution solution;
  string s = "PAHNAPLSIIGYIR"; 
  int cols = 3;
  int expectOutput = 7; 

  int output = solution.getRowsCnt(s, cols);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test3) {
  Solution solution;
  string s = "PAHNAPLSIIGYIR"; 
  int cols = 3;
  vector<char> expectOutput = {'P', 'A', 'H'};

  vector<char> output = solution.getFullRow(s, cols, 0);
  EXPECT_EQ(output, expectOutput);
}  


TEST(SolutionTest, test4) {
  Solution solution;
  string s = "PAHNAPLSIIGYIR"; 
  int cols = 3;
  vector<char> expectOutput = {0, 'N', 0};

  vector<char> output = solution.getSingleCharRow(s, cols, 3, 1);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test5) {
  Solution solution;
  int cols = 3;
  vector<vector<char>> matrix(7, vector<char>(cols,0)); 
  matrix[0] = {'P', 'A', 'H'};
  matrix[1] = {0, 'N', 0};
  matrix[2] = {'A', 'P', 'L'};
  matrix[3] = {0, 'S', 0};
  matrix[4] = {'I', 'I', 'G'};
  matrix[5] = {0, 'Y', 0};
  matrix[6] = {'I', 'R', 0};
  string output = solution.arrayToString(matrix, cols, 7);

  string expectOutput  = "PAHNAPLSIIGYIR"; 
  EXPECT_EQ(output, expectOutput);
}  
