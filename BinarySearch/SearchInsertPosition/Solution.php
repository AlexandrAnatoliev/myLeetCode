<?php
class Solution {
  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer 
   */
  public function searchInsert($nums, $target) {
    
    return 0;
  }
}

// Запуск тестов (вне класса)
echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  [
    'nums' => [1,3,5,6], 
    'target' => 5, 
    'expected' => 2, 
    'description' => 'Example 1'
  ],
];

foreach ($testCases as $test) {
  $result = $solution->searchInsert($test['nums'], 5);
  echo "Test: {$test['description']}\n";
  echo "Input: target = {$test['target']}\n";
  echo "Expected: {$test['expected']}\n";
  echo "Result: {$result}\n";
  if ($result == $test['expected']) {
    echo "✓ PASSED\n";
  } else {
    echo "✗ FAILED\n";
  }
  echo "------------------------\n";
}
