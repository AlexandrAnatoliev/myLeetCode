<?php

class Solution {
  /**
   * @param Integer $num
   * @return Boolean
   */
  public function isPerfectSquare($num) {
    return false; 
  }
}

// Запуск тестов (вне класса)
echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  ['n' => 5, 'expected' => true, 'description' => 'Example 1'],
];

foreach ($testCases as $test) {
  $result = $solution->isPerfectSquare($test['n']);
  echo "Test: {$test['description']}\n";
  echo "Input: n = {$test['n']}\n";
  echo "Expected: {$test['expected']}\n";
  echo "Result: {$result}\n";
  if ($result == $test['expected']) {
    echo "✓ PASSED\n";
  } else {
    echo "✗ FAILED\n";
  }
  echo "------------------------\n";
}
