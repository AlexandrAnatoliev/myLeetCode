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
      int length = s.length();
      int fromPtr = 0;
      int row = 0;

      while (row < rows) {
        matrix[row] = getFullRow(s, cols, fromPtr);
        row++;
        fromPtr += cols;
        int toPtr = cols - 2;
        while ((row < rows) && (toPtr > 0)) {
          matrix[row] = getSingleCharRow(s, cols, fromPtr, toPtr);
          row++;
          toPtr--;
          fromPtr++;
        }
      }
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

  public:
    vector<char> getFullRow(string s, int cols, int ptr) {
      vector<char> row(cols,0);
      for (int i = 0; cols > 0; i++) {
        row[i] = s[ptr];
        ptr++;
        cols--;
      }
      return row;
    }

  public:
    vector<char> getSingleCharRow(string s, int cols, int fromPtr, int toPtr) {
      vector<char> row(cols,0);
      row[toPtr] = s[fromPtr];
      return row;
    }

  public:
    string arrayToString(vector<vector<char>> matrix, int cols, int rows) {
      string str = "";
      for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
          if (matrix[c][r] != 0) {
            str += matrix[c][r];
          }
        }
      }
      return str;
    }
};
