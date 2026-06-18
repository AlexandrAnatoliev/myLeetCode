<?php
namespace BinarySearch3;

class Solution {

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Boolean
   */
  public function searchMatrix($matrix, $target) {
  }

  /**
   * @param Integer[] $row
   * @param Integer $target
   * @param Integer $endSearch
   * @return Array
   */
  public function getTargetIndex(
    $row, 
    $endSearch,
    $target) {

    $answer = [
      'searched'  => false,
      'index'     => $endSearch,
    ];

    $start  = 0;
    $middle = 0;

    while($start < $answer['index']) {
      $middle = $start + (int)(($endSearch - $start) / 2);
      if($row[$middle] == $target) {
        $answer['searched'] = true;
        $answer['index'] = $middle;
        return $answer;
      } elseif($row[$middle] > $target) {
        $answer['index'] = $middle;
      } else {
        $start = $middle + 1;
      }
    }
    return $answer;
  }
}
