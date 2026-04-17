<?php
class Solution {
  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer
   */
  public function search($nums, $target) {
    $answer = 0;
    return $answer;
  }
}

echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'target' => 0,
    'expected' => 4,
    'description' => 'Example 1'
  ],
];

foreach ($testCases as $test) {
  $result = $solution->search($test['nums'], $test['target']);
  echo "Test: {$test['description']}\n";
  echo "Expected: {$test['expected']}\n";
  echo "Result: {$result}\n";
  if ($result == $test['expected']) {
    echo "✓ PASSED\n";
  } else {
    echo "✗ FAILED\n";
  }
  echo "------------------------\n";
}
