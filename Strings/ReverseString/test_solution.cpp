#include <gtest/gtest.h>
#include <vector>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  vector<char> s = {'h', 'e', 'l', 'l', 'o'};
  vector<char> expectOutput = {'o', 'l', 'l', 'e', 'h'};

  solution.reverseString(s);
  EXPECT_EQ(expectOutput, s);
}
