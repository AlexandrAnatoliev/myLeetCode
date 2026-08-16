# Two Sum 2 - Input Array Is Sorted

*Given a **1-indexed** array of integers 
`numbers` that is already **sorted in 
non-decreasing order**, find two numbers such
that they add up to a specific `target`number.
Let these two numbers be numbers[index1] and
numbers[index2] where 1 <= index1 < index2 <=
numbers.length.*

*Return the indices of the two numbers index1
and index2, **each incremented by one**, as an 
integer array[index1, index2] of length 2.*

*The tests are generated such that there is 
**exactly one solution**. You **may not** use
the same element twice.*

*You solution must use only constant extra space.*

#### Example 1:
```
Input: numbers = [2,7,11,15], target = 9
Output: [1,2] 
```

#### Example 2:
```
Input: numbers = [2,3,4], target = 6
Output: [1,3] 
```

#### Example 3:
```
Input: numbers = [-1,0], target = -1
Output: [1,2] 
```

#### Constraints:
* `2 <= numbers.length <= 30000`
* `-1000 <= numbers[i] <= 1000`
* `numbers` is sorted in non-decreasing order
* `-1000 <= target <= 1000`
 
#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
