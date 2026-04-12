<?php

class Solution {
  /**
   * @param Integer $num
   * @return Boolean
   */
  public function isPerfectSquare($num) {
    $start = 1;
    $finish = $num;
    $middle = 0;
    
    while ($start < $finish) {
      $middle = $start + floor(($finish - $start) / 2);
      if ($middle * $middle == $num) {
        return true;
      } elseif ($middle * $middle > $num) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }
    return false; 
  }
}

// Запуск тестов (вне класса)
echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  ['n' => 16, 'expected' => true, 'description' => 'Example 1'],
  ['n' => 14, 'expected' => false, 'description' => 'Example 2'],
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
