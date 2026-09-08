#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
    vector<int> partitionLabels(string s) {
      vector<int> output = {};
      vector<int> letterCount = getLetterCount(s);
      int length = s.length();
      int ptr = 0;

      while(ptr < length) {
        int label = getLabelLength(
            s,letterCount,ptr);
        ptr += label;
        output.push_back(label);
      }
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
    int getLabelLength(
        string s, 
        vector<int> letterCount,
        int start) {
      bool fl_arr[26] = {};
      int length = s.length();
      int ptr = start;
      int cnt = 0;

      for(int i = start; i < length; i++) {
        int index = getLetterIndex(s[i]);
        if(fl_arr[index] == false) {
          cnt += letterCount[index];
        }
        fl_arr[index] = true;
        letterCount[index]--;
        cnt--;
        ptr++;
        if(cnt == 0) {
          break;
        }
      }
      return ptr;
    }
};
