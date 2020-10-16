// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

// This is a demo task.

// Write a function:

// function solution(A);

// that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

// For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

// Given A = [1, 2, 3], the function should return 4.

// Given A = [−1, −3], the function should return 1.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [−1,000,000..1,000,000].
// Copyright 2009–2019 by Codility Limited. All Rights Reserved. Unauthorized copying, publication or disclosure prohibited.

function solution(A) {
  let map = new Map();
  A = A.sort();

  for (let i = 0; i <= A.length; i++) {
    if (map.get(A[i])) {
      const newValue = map.get(A[i]) + 1;
      map.set(A[i], newValue)
    } else {
      map.set(A[i], 1)
    }
  }
  let smallest = null;
  for (let x = 1; x <= map.size; x++) {
    if (x > 0 && !map.get(x) && smallest === null) {
      smallest = x;
    } else if (x > 0 && !map.get(x) && x < smallest) {
      smallest = x;
    }
  }
  return smallest;
}
