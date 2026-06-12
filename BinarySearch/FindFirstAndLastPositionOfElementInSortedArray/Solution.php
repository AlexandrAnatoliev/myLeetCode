<?php
namespace BinarySearch1;

class Solution {

  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer[]
   */
  function searchRange($nums, $target) {
    return [1, 1];
      
  }

  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer
   */
  function getTargetIndex($nums, $target)
  {
    $start  = 0;
    $finish = count($nums) - 1;
    $middle = 0;

    while($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);
      if($nums[$middle] == $target) {
        return $middle;
      } elseif($nums[$middle] > $target) {
        $finish = $middle;
      } else {
        $start = $middle;
      }
    }
    return -1;
  }

}
