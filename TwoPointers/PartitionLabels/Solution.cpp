#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    vector<int> partitionLabels(string s) {
      vector<int> output = {};
      return output;
    }

  public:
    int getLetterIndex(char letter) {
      return int(letter) - 97;
    }

  public:
    vector<int> getLetterCount(string s) {
      vector<int> output(26);
      int length = s.length();
      for(int i = 0; i < length; i++) {
        int index = getLetterIndex(s[i]);
        output[index] += 1;
      }
      return output;
    }

  public:
    int getLabelLength(string s, int start) {
      return 0;
    }
};
