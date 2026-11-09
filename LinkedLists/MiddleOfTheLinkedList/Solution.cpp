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

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode* middleNode(ListNode* head) {
      int listLength = getListLength(head);
      int nodeNum = listLength / 2;
      for (int i = 0; i < nodeNum; i++) {
        head = head->next;
      }
      return head;
    }

  public:
    int getListLength(ListNode* node) {
      int cnt = 1;
      while (node->next != nullptr) {
        node = node->next;
        cnt++;
      }
      return cnt;
    }
};
