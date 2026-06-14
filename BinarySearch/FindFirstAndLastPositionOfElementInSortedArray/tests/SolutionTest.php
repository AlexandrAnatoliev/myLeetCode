<?php
use PHPUnit\Framework\TestCase;
use BinarySearch1\Solution;

class SolutionTest extends TestCase
{
  public function test1SearchRange()
  {
    $solution = new Solution();
    $nums = [5,7,7,8,8,10];
    $output = [3,4];
    $this->assertEquals(
      $output,
      $solution->searchRange($nums, 8));
  }

  public function test2SearchRange()
  {
    $solution = new Solution();
    $nums = [5,7,7,8,8,10];
    $output = [-1,-1];
    $this->assertEquals(
      $output,
      $solution->searchRange($nums, 6));
  }

  public function testGetTargetIndex() {
    $solution = new Solution();
    $nums = [1,2,3,6,7,10];
    $this->assertEquals(
      2, $solution->getTargetIndex($nums, 3));
    $this->assertEquals(
      0, $solution->getTargetIndex($nums, 1));
    $this->assertEquals(
      5, $solution->getTargetIndex($nums, 10));
    $this->assertEquals(
      -1, $solution->getTargetIndex($nums, 5));
    $this->assertEquals(
      -1, $solution->getTargetIndex($nums, 10**9));
    $this->assertEquals(
      -1, $solution->getTargetIndex($nums, -(10**9)));
  }
}
