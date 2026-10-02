# Reverse string 

*Write a function that reversed a string. 
The input string is given as an array of
characters `s`.*

*You must do this by modifying the input
array in-place with O(1) extra memory.*

#### Example 1:
```
Input: s = ["h", "e", "l", "l", "o"]
Output: ["o", "l", "l", "e", "h"]
```

#### Example 2:
```
Input: s = ["H", "a", "n", "n", "a", "h"]
Output: ["h", "a", "n", "n", "a", "H"]
```

#### Constraints:
* `1 <= s.length <= 10^5`
* `s[i]` is a printable ascii character

#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp 
 -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
