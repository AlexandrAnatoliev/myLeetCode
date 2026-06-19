<?php
namespace BinarySearch3;

class Solution {

  /**
   * @param Integer[][] $matrix
   * @param Integer $target
   * @return Boolean
   */
  public function searchMatrix($matrix, $target) {
    $endSearch = count($matrix[0]) - 1;
    $answer = $this->getTargetIndex(
      $matrix[0], $endSearch, $target);

    foreach($matrix as $row) {
      $answer = $this->getTargetIndex(
        $row,
        $answer['index'], $target);
      if($answer['searched']) {
        break;
      }
    } 
    return $answer['searched'];
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

    if($row[0] > $target) {
      $answer['index'] = 0;
      return $answer;
    }

    if($row[0] == $target) {
      $answer['searched'] = true;
      $answer['index'] = 0;
      return $answer;
    }

    if($row[$endSearch] == $target) {
      $answer['searched'] = true;
      return $answer;
    }

    while($start < $answer['index']) {
      $middle = $start + (int)(($answer['index'] - $start) / 2);
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
