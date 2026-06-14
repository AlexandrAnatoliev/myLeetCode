<?php
namespace BinarySearch2;

class Solution {

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Boolean
   */
  function searchMatrix($matrix, $target) {
    return false;
  }

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Integer
   */
  function getRowIndex($matrix, $target) {
    $start  = 0;
    $middle = 0;
    $finish = count($matrix) - 1;

    if(count($matrix[0]) == 0) {
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
}
