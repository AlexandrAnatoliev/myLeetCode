<?php
namespace BinarySearch1;

class Solution {

  /**
   * @param Integer[] $nums
   * @param Integer $target
   * @return Integer[]
   */
  function searchRange($nums, $target) {
    $targetIndex = $this->getTargetIndex($nums, $target);
    if($targetIndex == -1) {
      return [-1, -1];
    }

    $startPos = $targetIndex;
    $endPos   = $targetIndex;
    $finish = count($nums) - 1;
    while($startPos > 0 and $nums[$startPos - 1] == $target) {
      $startPos = $startPos - 1;
    }
    while($endPos < $finish and $nums[$endPos + 1] == $target) {
      $endPos = $endPos + 1;
    }

    return [$startPos, $endPos];
      
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

    if(count($nums) == 0) {
      return -1;
    }

    if($nums[$finish] == $target) {
      return $finish;
    }

    while($start < $finish) {
      $middle = $start + (int)(($finish - $start) / 2);
      if($nums[$middle] == $target) {
        return $middle;
      } elseif($nums[$middle] > $target) {
        $finish = $middle;
      } else {
        $start = $middle + 1;
      }
    }
    return -1;
  }

}
