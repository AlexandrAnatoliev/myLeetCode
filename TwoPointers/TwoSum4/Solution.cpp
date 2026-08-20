/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : 
    val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : 
    val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) :
    val(x), left(left), right(right) {}
};

class Solution {
  public:
    bool findTarget(TreeNode* root, int k) {
      vector<int> arr = {};
      inOrder(root, arr);
      int size = arr.size();
      int ptr1 = 0;
      int ptr2 = size - 1;

      while (ptr1 < ptr2) {
        if (arr[ptr1] + arr[ptr2] == k) {
          return true;
        } else if (arr[ptr1] + arr[ptr2] < k) {
          ptr1++;
        } else {
          ptr2--;
        }
      }
      return false;
    }

  public:
    void inOrder(TreeNode* node, vector<int>& res) {
      if (!node) {
        return;
      }
      inOrder(node->left, res);
      res.push_back(node->val);
      inOrder(node->right, res);
    }
};
