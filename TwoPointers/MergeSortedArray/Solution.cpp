#include <vector>
using namespace std;

class Solution {
  public:
    void merge(vector<int>& nums1, int m,
        vector<int>& nums2, int n) {
      vector<int> output = {};
      int ptr1 = 0;
      int ptr2 = 0;
      while (ptr1 < m && ptr2 < n) {
        if (ptr1 < m && nums1[ptr1] < nums2[ptr2]) {
          output.push_back(nums1[ptr1]);
          ptr1++;
        } else if (ptr2 < n) {
          output.push_back(nums2[ptr2]);
          ptr2++;
        }
      }
      nums1 = output;
    }
};
