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
