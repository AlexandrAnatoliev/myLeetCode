#include <gtest/gtest.h>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  bool expectOutput = true;
  TreeNode* node2 = new TreeNode(2);
  TreeNode* node4 = new TreeNode(4);
  TreeNode* node7 = new TreeNode(7);
  TreeNode* node3 = new TreeNode(3, node2, node4);
  TreeNode* node6 = new TreeNode(6, nullptr, node7);
  TreeNode* node5 = new TreeNode(5, node3, node6);

  EXPECT_EQ(solution.findTarget(node5, 9), expectOutput);
}

