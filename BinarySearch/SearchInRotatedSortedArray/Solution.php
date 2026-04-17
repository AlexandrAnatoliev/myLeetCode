<?php
class Solution {
  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer
   */
  public function search($nums, $target) {
    $start = 0;
    $finish = count($nums) - 1;
    $middle = 0;
    $answer = -1;

    $rotateIndex = $this->getRotateIndex($nums);

    if (count($nums) == 1 ) {
      $answer = ($nums[0] == $target) ? 0 : -1;
    } elseif ($rotateIndex != $finish) {
      if ($nums[$finish] == $target) {
        $answer = $finish;
      } elseif ($nums[$start] == $target) {
        $answer = $start;
      } elseif ($nums[$finish] > $target) {
        $start = $rotateIndex + 1;
      } else {
        $finish = $rotateIndex;
      }
    }

    if ($answer != -1) {
      return $answer;
    }

    $answer = $this->binarSearch($nums, $start, $finish, $target);
    return $answer;
  }

  /**
   * @param Integer[] $nums
   * @param Integer $start
   * @param Integer $finish
   * @param Integer $target
   * @return Integer
   */
  public function binarSearch($nums, $start, $finish, $target) {
    $answer = -1;
    while ($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);

      if ($nums[$middle] == $target) {
        $answer = $middle;
        break;
      } elseif ($nums[$middle] > $target) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }

      if ($nums[$start] == $target) {
        return $start;
      }
    }
    return $answer;
  }

  /**
   * @param Integer[] $nums
   * @return Integer
   */
  public function getRotateIndex($nums) {
    $start = 0;
    $finish = count($nums) - 1;
    $middle = 0;
    $index = $finish;

    while ($start < $finish) {
      $middle = $start + floor(($finish - $start) / 2);
      if ($nums[$middle] > $nums[$finish]) {
        $index = $middle;
        $start = $middle + 1;
      } else {
        $finish = $middle;
      }
    }
    return $index;
  }
}

echo "Running ALL tests...\n\n";
$solution = new Solution();

echo "Running GETROTATEINDEX tests...\n\n";

$getRotateIndexTestCases = [
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'expected' => 3,
    'description' => 'Test 1'
  ],
  [
    'nums' => [4, 5, 6, 7, 8, 0, 1, 2],
    'expected' => 4,
    'description' => 'Test 2'
  ],
  [
    'nums' => [0, 1, 2, 3, 4, 5, 6, 7, 8],
    'expected' => 8,
    'description' => 'Test 3'
  ],
  [
    'nums' => [1, 2, 3, 4, 5, 6, 7, 8, 0],
    'expected' => 7,
    'description' => 'Test 4'
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

echo "\n Running SEARCH tests...\n\n";

$searchTestCases = [
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'target' => 0,
    'expected' => 4,
    'description' => 'Example 1'
  ],
  [
    'nums' => [4, 5, 6, 7, 0, 1, 2],
    'target' => 3,
    'expected' => -1,
    'description' => 'Example 2'
  ],
  [
    'nums' => [1],
    'target' => 0,
    'expected' => -1,
    'description' => 'Example 3'
  ],
  [
    'nums' => [1],
    'target' => 1,
    'expected' => 0,
    'description' => 'Example 4'
  ],
  [
    'nums' => [1, 3],
    'target' => 1,
    'expected' => 0,
    'description' => 'Example 5'
  ],
  [
    'nums' => [1, 3],
    'target' => 3,
    'expected' => 1,
    'description' => 'Example 6'
  ],
  [
    'nums' => [3, 1],
    'target' => 3,
    'expected' => 0,
    'description' => 'Example 7'
  ],
  [
    'nums' => [1, 3, 5],
    'target' => 5,
    'expected' => 2,
    'description' => 'Example 8'
  ],
  [
    'nums' => [3, 5, 1],
    'target' => 1,
    'expected' => 2,
    'description' => 'Example 9'
  ],
  [
    'nums' => [5, 1, 3],
    'target' => 5,
    'expected' => 0,
    'description' => 'Example 10'
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
