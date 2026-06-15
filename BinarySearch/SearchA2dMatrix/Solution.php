<?php
namespace BinarySearch2;

class Solution {

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Boolean
   */
  public function searchMatrix($matrix, $target) {
    $rowIndex = $this->getRowIndex($matrix, $target);
    if($rowIndex == -1) {
      return false;
    }
    return $this->isTarget($matrix[$rowIndex], $target);
  }

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Integer
   */
  public function getRowIndex($matrix, $target) {
    $start  = 0;
    $middle = 0;
    $finish = count($matrix) - 1;

    if(count($matrix[0]) == 0)
    {
      return -1;
    }

    if($matrix[0][0] > $target) {
      return -1;
    }

    if($matrix[$finish][count($matrix[$finish]) - 1] < $target) {
      return -1;
    }

    if($matrix[$finish][0] <= $target) {
      return $finish;
    }

    while($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);
      if(($matrix[$middle][0] <= $target) and
      ($target <= $matrix[$middle][count($matrix[$middle]) - 1])) {
        return $middle;
      } elseif($matrix[$middle][0] > $target) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }
    return -1;
  }

  /**
   * @param Integer[] $row
   * @param Integer $target
   * @return Boolean
   */
  public function isTarget($row, $target) {
    $start  = 0;
    $middle = 0;
    $finish = count($row) - 1;

    if(count($row) == 0) {
      return false;
    }

    if($row[$finish] == $target) {
      return true;
    }

    while($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);
      if($row[$middle] == $target) {
        return true;
      } elseif($row[$middle] > $target) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }

    return false;
  }
}
