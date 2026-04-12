<?php
// run_test.php

require_once 'Solution.php';

function runTest($n, $firstBad, $expected) {
    $solution = new Solution();
    $solution->setFirstBad($firstBad);
    $result = $solution->firstBadVersion($n);
    
    if ($result === $expected) {
        echo "✓ PASS: n={$n}, bad={$firstBad} -> {$result}\n";
        return true;
    } else {
        echo "✗ FAIL: n={$n}, bad={$firstBad} expected {$expected}, got {$result}\n";
        return false;
    }
}

echo "Running tests...\n\n";

$tests = [
    [5, 4, 4],
    [10, 1, 1],
    [10, 10, 10],
    [100, 50, 50],
    [1, 1, 1],
    [2, 1, 1],
    [2, 2, 2],
];

$passed = 0;
foreach ($tests as $test) {
    if (runTest($test[0], $test[1], $test[2])) {
        $passed++;
    }
}

echo "\nResults: {$passed}/" . count($tests) . " tests passed.\n";
