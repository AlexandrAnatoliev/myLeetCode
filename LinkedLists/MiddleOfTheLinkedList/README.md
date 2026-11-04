# Middle of the linked list 

*Given the `head` of a singly linked list,
return the middle node of the linked list.*

*If there are two middle nodes, return the
second middle node.*

#### Example 1:
```
Input: head = [1, 2, 3, 4, 5]
Output: [3, 4, 5]
```

#### Example 2:
```
Input: head = [1, 2, 3, 4, 5, 6]
Output: [4, 5, 6]
```

#### Constraints:
* The number of nodes in the list is in the
range `[1, 100]`
* `1 <= Node.val <= 100`

#### Run tests
```
 g++ test_solution.cpp Solution.cpp 
 -lgtest -lgtest_main -pthread -o test_solution
 ./test_solution
 ```
