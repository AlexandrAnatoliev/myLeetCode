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

  delete node2;
  delete node3;
  delete node4;
  delete node5;
  delete node6;
  delete node7;
}

TEST(SolutionTest, test3) {
  Solution solution;
  vector<int> expectOutput  = {2,3,4,5,6,7}; 
  TreeNode* node2 = new TreeNode(2);
  TreeNode* node4 = new TreeNode(4);
  TreeNode* node7 = new TreeNode(7);
  TreeNode* node3 = new TreeNode(3, node2, node4);
  TreeNode* node6 = new TreeNode(6, nullptr, node7);
  TreeNode* node5 = new TreeNode(5, node3, node6);

  vector<int> output = {};
  solution.inOrder(node5, output);
  int size = output.size();
  for (int i = 0; i < size; i++) {
    EXPECT_EQ(output[i], expectOutput[i]);
  }

  delete node2;
  delete node3;
  delete node4;
  delete node5;
  delete node6;
  delete node7;
}


