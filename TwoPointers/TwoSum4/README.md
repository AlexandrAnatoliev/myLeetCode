# Two Sum 4 - Input is a BST

*Given the `root` of binary search tree an 
integer `k`, return `true` if there exist two 
elements the BST such that their sum is equal
t0 `k`, or `false` otherwise.*

#### Example 1:
```
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true 
```

#### Example 2:
```
Input: root = [5,3,6,2,4,null,7], k =28 
Output: 28 
```

#### Constraints:
* The number of nodes in the tree is in the
range [1,10^4]
* -10^4 <= Node.val <= 10^4
* `root` is guaranteed to be a valid binary
search tree.
-10^5 <= k <= 10^5
 
#### Run tests
```
 g++ -std=c++14 test_solution.cpp Solution.cpp -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
