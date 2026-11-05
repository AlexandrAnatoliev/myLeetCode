#include <gtest/gtest.h>
#include "Solution.cpp"
using namespace std;

//Input: head = [1, 2, 3, 4, 5]
// Output: [3, 4, 5]
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *    int val;
 *    ListNode* next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }
 */
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

