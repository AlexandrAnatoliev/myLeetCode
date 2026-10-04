#include <gtest/gtest.h>
#include <string>
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
