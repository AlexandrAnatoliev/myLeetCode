<?php
class Solution {
  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer
   */
  public function searchInsert($nums, $target) {
    $start = 0;
    $finish = count($nums) - 1;
    $middle = 0;
    $answer = 0;
    
    if ($target < 0) {
      return 0;
    }
    if ($target > $nums[$finish]) {
      return $finish + 1;
    }
    while ($start < $finish) {
      $middle = $start + floor(($finish - $start) / 2);
      $answer = $start;
      if ($nums[$middle] == $target) {
        $answer = $middle;
        break;
      } elseif ($nums[$middle] > $target) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
        $answer = $start;
      }
    }
    return $answer;
  }
}

echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  [
    'nums' => [1,3,5,6],
    'target' => 5,
    'expected' => 2,
    'description' => 'Example 1'
  ],
  [
    'nums' => [1,3,5,6],
    'target' => 2,
    'expected' => 1,
    'description' => 'Example 2'
  ],
  [
    'nums' => [1,3,5,6],
    'target' => 7,
    'expected' => 4,
    'description' => 'Example 3'
  ],
  [
    'nums' => [1,3,5],
    'target' => 3,
    'expected' => 1,
    'description' => 'Example 4'
  ],
];

foreach ($testCases as $test) {
  $result = $solution->searchInsert($test['nums'], $test['target']);
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
