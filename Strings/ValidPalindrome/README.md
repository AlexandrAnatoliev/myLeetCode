# Valid palindrome 

*Phrase is a palindrome if, after converting
all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters,
it reads the same forward and backward. 
Alphanumeric characters include letters and 
numbers.*

*Given a string `s`, return `true` if it is a
palindrome, or `false` otherwise.*

#### Example 1:
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
```

#### Example 2:
```
Input: s = "race a car"
Output: false
```

#### Example 3:
```
Input: s = " "
Output: true
```

#### Constraints:
* `1 <= s.length <= 2 * 10^5`
* `s` consists only printable ASCII characters

#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp 
 -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
