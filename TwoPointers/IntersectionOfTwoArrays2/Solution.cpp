#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> intersect(vector<int>& nums1,
        vector<int>& nums2) {
      int ptr1 = 0;
      int ptr2 = 0;
      int size1 = nums1.size();
      int size2 = nums2.size();
      vector<int> output = {};

      sort(nums1.begin(), nums1.end());
      sort(nums2.begin(), nums2.end());
      while (ptr1 < size1 && ptr2 < size2) {
        if (nums1[ptr1] == nums2[ptr2]) {
          output.push_back(nums1[ptr1]);
          ptr1++;
          ptr2++;
        } else if (nums1[ptr1] < nums2[ptr2]) {
          ptr1++;
        } else {
          ptr2++;
        }
      }
      return output;
    }
};
