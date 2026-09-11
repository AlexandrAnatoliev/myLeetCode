# Roman to integer

*Roman numerals are represented by seven
different symbols: `I`, `V`, `X`, `L`, `C`,
`D` and `M`.*

```
Symbol  Value
I       1
V       5
X       10
L       50
C       100
D       500
M       1000
```

*For example, `2` is written as `II` in
Roman numeral, just two ones added together.
`12` is written as `XII`, which simply `X+II`.
The number `27` is written as `XXVII`, which 
is `XX+V+II`.*

*Roman numerals are usually written largest
to smallest from left to right. However, the
numeral for four is not `IIII`. Instead, the
number four is written as `IV`. Because the
one is before five we subtract it making four.
The same principle applies to the number nine,
which is written as `IX`. There are six 
instances where subtraction is used:*

```
IV - 4      IX - 9
XL - 40     XC - 90
CD - 400    CM - 900
```

*Given a roman numerals, convert it to an 
integer.*

#### Example 1:
```
Input: s = "III"
Output: 3
```

#### Example 2:
```
Input: s = "LVIII"
Output: 58
```

#### Example 3:
```
Input: s = "MCMXCIV"
Output: 1994
```

#### Constraints:
* `1 <= s.length <= 15`
* `s` contains only the characters
* It's guaranteed that `s` is a valid roman
numerals in the range `[1, 3999]`.

#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp 
 -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
