<?php
use PHPUnit\Framework\TestCase;
use BinarySearch2\Solution;

class SolutionTest extends TestCase
{
  public function test1SearchRange()
  {
    $solution = new Solution();
    $matrix = [
      [1,3,5,7],
      [10,11,16,20],
      [23,30,34,60]
    ]; 
    $output = true;
    $this->assertEquals(
      $output,
      $solution->searchMatrix($matrix, 3));
  }

  public function testGetRowIndex()
  {
    $solution = new Solution();
    $matrix = [
      [1,3,5,7],
      [10,11,16,20],
      [23,30,34,60]
    ]; 
    $this->assertEquals(
      -1, $solution->getRowIndex([[]], 10));
    $this->assertEquals(
      1, $solution->getRowIndex($matrix, 10));
    $this->assertEquals(
      0, $solution->getRowIndex($matrix, 3));
  }
}
