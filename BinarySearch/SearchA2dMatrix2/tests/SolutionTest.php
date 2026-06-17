<?php
use PHPUnit\Framework\TestCase;
use BinarySearch3\Solution;

class SolutionTest extends TestCase
{
  public function testSearchRange()
  {
    $solution = new Solution();
    $matrix = [
      [1, 4, 7, 11, 15],
      [2, 5, 8, 12, 19],
      [3, 6, 9, 16, 22],
      [10,13,14,17, 24],
      [18,21,23,26, 30]
    ]; 
    $this->assertEquals(true,
      $solution->searchMatrix($matrix, 5));
  }

  public function testGetTargetIndexInRow()
  {
    $solution = new Solution();
    $row = [1, 4, 7, 11, 15];
    $this->assertEquals([true, 1],
      $solution->getTargetIndex($row, 4));
  }
}
