<?php
use PHPUnit\Framework\TestCase;
use BinarySearch1\Solution;

class SolutionTest extends TestCase
{
    public function testSearchRange()
    {
        $solution = new Solution();
        $nums = [5,7,7,8,8,10];
        $output = [3,4];
        $this->assertEquals(
          $output,
          $solution->searchRange($nums, 8));
    }

}
