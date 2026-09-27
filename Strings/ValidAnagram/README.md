# Valid anagram 

*Given two strings `s` and `t`, return `true` if `t` is an anagram
of `s`, and `false` otherwise.*

#### Example 1:
```
Input: s = "anagram", t = "nagaram"
Output: true
```

#### Example 2:
```
Input: s = "rat", t = "car"
Output: false
```

#### Constraints:
* `1 <= s.length, t.length <= 5 * 10^4`
* `s` and `t` consists of lowercase English letters

#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp 
 -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
