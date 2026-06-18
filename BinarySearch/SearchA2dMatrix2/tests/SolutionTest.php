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
    $answer1 = [
      'searched'  => true,
      'index'     => 3,
    ];
    $this->assertEquals($answer1,
    $solution->getTargetIndex($row, 4, 11));
    $answer2 = [
      'searched'  => false,
      'index'     => 3,
    ];
    $this->assertEquals($answer2,
      $solution->getTargetIndex($row, 4, 10));
    $answer3 = [
      'searched'  => true,
      'index'     => 0,
    ];
    $this->assertEquals($answer3,
      $solution->getTargetIndex($row, 4, 1));
    $answer4 = [
      'searched'  => true,
      'index'     => 4,
    ];
    $this->assertEquals($answer4,
      $solution->getTargetIndex($row, 4, 15));
  }
}
