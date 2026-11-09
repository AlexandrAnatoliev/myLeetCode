#include <gtest/gtest.h>
#include "Solution.cpp"
using namespace std;

TEST(SolutionTest, example1) {
  Solution solution;
  ListNode* node5 = new ListNode(5);
  ListNode* node4 = new ListNode(4, node5);
  ListNode* node3 = new ListNode(3, node4);
  ListNode* node2 = new ListNode(2, node3);
  ListNode* node1 = new ListNode(1, node2);

  EXPECT_EQ(solution.middleNode(node1), node3);

  delete node1;
  delete node2;
  delete node3;
  delete node4;
  delete node5;
}

TEST(SolutionTest, test1) {
  Solution solution;
  ListNode* node5 = new ListNode(5);
  ListNode* node4 = new ListNode(4, node5);
  ListNode* node3 = new ListNode(3, node4);
  ListNode* node2 = new ListNode(2, node3);
  ListNode* node1 = new ListNode(1, node2);

  EXPECT_EQ(solution.getListLength(node1), 5);

  delete node1;
  delete node2;
  delete node3;
  delete node4;
  delete node5;
}

TEST(SolutionTest, example2) {
  Solution solution;
  ListNode* node6 = new ListNode(6);
  ListNode* node5 = new ListNode(5, node6);
  ListNode* node4 = new ListNode(4, node5);
  ListNode* node3 = new ListNode(3, node4);
  ListNode* node2 = new ListNode(2, node3);
  ListNode* node1 = new ListNode(1, node2);

  EXPECT_EQ(solution.middleNode(node1), node4);

  delete node1;
  delete node2;
  delete node3;
  delete node4;
  delete node5;
  delete node6;
}
