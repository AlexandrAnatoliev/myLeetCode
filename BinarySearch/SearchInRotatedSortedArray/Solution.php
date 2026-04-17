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

  /**
   * @param Integer[] $nums
   * @return Integer
   */
  public function getRotateIndex($nums) {
    $index = 0;
    return $index;
  }
}

echo "Running tests...\n\n";
$solution = new Solution();

echo "Running getRotateIndex tests...\n\n";

$getRotateIndexTestCases = [
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'expected' => 4,
    'description' => 'Test 1'
  ],
];

foreach ($getRotateIndexTestCases as $test) {
  $result = $solution->getRotateIndex($test['nums']);
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

echo "Running search tests...\n\n";

$searchTestCases = [
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'target' => 0,
    'expected' => 4,
    'description' => 'Example 1'
  ],
];

foreach ($searchTestCases as $test) {
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
