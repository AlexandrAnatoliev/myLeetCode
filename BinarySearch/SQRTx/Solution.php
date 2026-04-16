<?php
class Solution {
  /**
   * @param Integer $x
   * @return Integer
   */
  public function mySqrt($x) {
    $start = 1;
    $finish = $x;
    $middle = 0;
    while ($start < $finish) {
      $middle = $start + floor(($finish - $start) / 2);
      if ($middle * $middle == $x) {
        return $middle;
      } elseif ($middle * $middle > $num) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }
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
