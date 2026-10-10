#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string convert(string s, int numRows) {
      return "";
    }

  public:
    vector<vector<char>> stringToArray(string s, int cols) {
      int rows = getRowsCnt(s, cols);
      vector<vector<char>> matrix(rows, vector<char>(cols,0));
      matrix[0] = {'P', 'A', 'H'};
      matrix[1] = {0, 'N', 0};
      matrix[2] = {'A', 'P', 'L'};
      matrix[3] = {0, 'S', 0};
      matrix[4] = {'I', 'I', 'G'};
      matrix[5] = {0, 'Y', 0};
      matrix[6] = {'I', 'R', 0};
      return matrix;
    }

  public:
    int getRowsCnt(string s, int cols) {
      int cnt = 0;
      int singleRows;
      int length = s.length();
      while (length > 0) {
        length -= cols;
        cnt++;
        singleRows = cols - 2;       
        while ((length > 0) && (singleRows > 0)) {
          singleRows--;
          length--;
          cnt++;
        }
      }
      return cnt;
    }
};
