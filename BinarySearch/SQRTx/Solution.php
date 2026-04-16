<?php
class Solution {
  /**
   * @param Integer $x
   * @return Integer
   */
  public function mySqrt($x) {
    $start = 0;
    $finish = $x;
    $middle = 0;
    $answer = 0;
    if ($x == 1) {
      return 1;
    }
    while ($start < $finish) {
      $middle = $start + floor(($finish - $start) / 2);
      if ($middle * $middle == $x) {
        return $middle;
      } elseif ($middle * $middle > $x) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
        $answer = $middle;
      }
    }
    return $answer;
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
  [
    'x' => 8,
    'expected' => 2,
    'description' => 'Example 2'
  ],
  [
    'x' => 0,
    'expected' => 0,
    'description' => 'Example 3'
  ],
  [
    'x' => 1,
    'expected' => 1,
    'description' => 'Example 4'
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
