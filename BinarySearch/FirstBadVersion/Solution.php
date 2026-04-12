<?php

class Solution {
  /**
   * @param Integer $n
   * @return Integer
   */
  function firstBadVersion($n) {
    $start = 1;
    $finish = $n;
    $middle = 0;

    while ($start < $finish) { 
      $middle = $start + floor(($finish - $start) / 2);
      if ($this->isBadVersion($middle)) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }

    return $start;
  }

  // Временная реализация для тестирования
  public static $badVersion = 4;
  function isBadVersion($n) {
    return $n >= self::$badVersion;
  }
}

// Запуск тестов (вне класса)
echo "Running tests...\n\n";

$solution = new Solution();

$testCases = [
  ['n' => 5, 'expected' => 4, 'description' => 'Пример из задачи'],
  ['n' => 10, 'expected' => 4, 'description' => 'n=10, bad=4'],
  ['n' => 4, 'expected' => 4, 'description' => 'n=4, bad=4'],
  ['n' => 3, 'expected' => 4, 'description' => 'n=3, bad=4 (нет плохой версии)'],
];

foreach ($testCases as $test) {
  $result = $solution->firstBadVersion($test['n']);
  echo "Test: {$test['description']}\n";
  echo "Input: n = {$test['n']}\n";
  echo "Expected: {$test['expected']}\n";
  echo "Result: {$result}\n";
  echo ($result == $test['expected'] ? "✓ PASSED\n" : "✗ FAILED\n");
  echo "------------------------\n";
}
