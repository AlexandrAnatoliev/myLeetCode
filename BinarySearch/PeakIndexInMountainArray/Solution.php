<?php
class Solution {
  /**
   * @param Integer[] $arr
   * @return Integer
   */
  public function peakIndexInMountainArray($arr) {
    $start = 0;
    $finish = count($arr) - 1;

    while ($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);

      if ($arr[$middle - 1] == $arr[$middle + 1]) {
        return $middle;
      } elseif ($arr[$middle] > $arr[$middle + 1]) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }
    return 0;
  }
}

echo "Running ALL tests...\n\n";
$solution = new Solution();

$testCases = [
  [
    'arr' => [0,1,0],
    'expected' => 1,
    'description' => 'Example 1'
  ],
  [
    'arr' => [0,2,1,0],
    'expected' => 1,
    'description' => 'Example 2'
  ],
  [
    'arr' => [0,10,5,2],
    'expected' => 1,
    'description' => 'Example 3'
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

