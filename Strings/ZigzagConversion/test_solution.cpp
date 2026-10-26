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

TEST(SolutionTest, test6) {
  Solution solution;
  string s = "PAYPALISHIRING"; 
  int cols = 3;
  vector<vector<char>> expectOutput(7, vector<char>(cols,0)); 
  expectOutput[0] = {'P', 'A', 'Y'};
  expectOutput[1] = {0, 'P', 0};
  expectOutput[2] = {'A', 'L', 'I'};
  expectOutput[3] = {0, 'S', 0};
  expectOutput[4] = {'H', 'I', 'R'};
  expectOutput[5] = {0, 'I', 0};
  expectOutput[6] = {'N', 'G', 0};

  vector<vector<char>> output = solution.stringToArray(s, cols);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test9) {
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
  string output = solution.arrayToVerticalString(matrix, cols, 7);

  string expectOutput  = "PAIIANPSIYRHLG"; 
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, example2) {
  Solution solution;
  string s = "PAYPALISHIRING"; 
  int numRows = 4;
  string expectOutput  = "PINALSIGYAHRPI"; 

  string output = solution.convert(s, numRows);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test10) {
  Solution solution;
  string s = "A"; 
  int cols = 1;
  vector<vector<char>> expectOutput(1, vector<char>(cols,0)); 
  expectOutput[0] = {'A'};

  vector<vector<char>> output = solution.stringToArray(s, cols);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test11) {
  Solution solution;
  string s = "A"; 
  int cols = 1;
  int expectOutput = 1; 

  int output = solution.getRowsCnt(s, cols);
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, test12) {
  Solution solution;
  int cols = 1;
  vector<vector<char>> matrix(1, vector<char>(cols,0)); 
  matrix[0] = {'A'};
  string output = solution.arrayToVerticalString(matrix, cols, 1);

  string expectOutput  = "A"; 
  EXPECT_EQ(output, expectOutput);
}  

TEST(SolutionTest, example3) {
  Solution solution;
  string s = "A"; 
  int numRows = 1;
  string expectOutput  = "A"; 

  string output = solution.convert(s, numRows);
  EXPECT_EQ(output, expectOutput);
}

TEST(SolutionTest, test13) {
  Solution solution;
  string s = "PAYPALISHIRING"; 
  int numRows = 7;
  string expectOutput  = "PNAIGYRPIAHLSI"; 

  string output = solution.convert(s, numRows);
  EXPECT_EQ(output, expectOutput);
}
