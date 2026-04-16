<?php
class Solution {
  /**
   * @param Integer $x
   * @return Integer
   */
  public function mySqrt($x) {
    return $x;
  }
}

echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  [
    'x' => 4,
    'expected' => 2,
    'description' => 'Example 1'
  ],
];

foreach ($testCases as $test) {
  $result = $solution->mySqrt($test['x']);
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
