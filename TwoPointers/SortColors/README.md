# Sort colors

*You are given an array `nums` with `n`
objects colored red, white, or blue, sort 
them in-place so that objects of the same
are adjacent, with the colors in the order
red, white, and blue.*

*We will use the integers 0, 1 and 2 to 
represent the colors red, white, and blue, 
respectively.*

*You must solve this problem without using
the library's sort function.*

#### Example 1:
```
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2] 
```

#### Example 2:
```
Input: nums = [2,0,1]
Output: [0,1,2] 
```

#### Constraints:
* `n == nums.length`
* `1 <= n <= 300`
* `nums[i]` is either 0,1, or 2

#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
