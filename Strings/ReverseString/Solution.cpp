#include <vector>
using namespace std;

class Solution {
  public:
    void reverseString(vector<char>& s) {
      int size = s.size() - 1;
      vector<char> output = {};

      for (int i = size; i >=0; i--) {
        output.push_back(s[i]);
      }
      s = output;
    }
};
