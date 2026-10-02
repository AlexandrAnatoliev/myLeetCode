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

TEST(SolutionTest, example2) {
  Solution solution;
  vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};
  vector<char> expectOutput = {'h', 'a', 'n', 'n', 'a', 'H'};

  solution.reverseString(s);
  EXPECT_EQ(expectOutput, s);
}
