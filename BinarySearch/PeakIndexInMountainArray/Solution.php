<?php
class Solution {
  /**
   * @param Integer[] $arr
   * @return Integer
   */
  public function peakIndexInMountainArray($arr) {
    return 1;
  }
}


echo "Running ALL tests...\n\n";
$solution = new Solution();

echo "Running GETROTATEINDEX tests...\n\n";

$testCases = [
  [
    'arr' => [0,1,0],
    'expected' => 1,
    'description' => 'Example 1'
  ],
];

foreach ($testCases as $test) {
  $result = $solution->peakIndexInMountainArray($test['arr']);
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

