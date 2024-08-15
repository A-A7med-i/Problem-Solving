# Left and Right Sum Differences

## Problem Description

Given an array of integers `nums`, calculate the absolute difference between the sum of all elements to the left and the sum of all elements to the right of each element. Return an array of these differences.

## Function Signature

```c
int* leftRightDifference(int* nums, int numsSize, int* returnSize);
```

## Parameters

- `nums`: An integer array of input numbers
- `numsSize`: The size of the `nums` array
- `returnSize`: A pointer to store the size of the returned array (should be set to `numsSize`)

## Return Value

An integer array where each element is the absolute difference between the sum of all elements to its left and the sum of all elements to its right in the original array.

## Algorithm

The function uses the following steps to calculate the left and right sum differences:

1. Initialize an array `result` of size `numsSize` to store the differences.
2. Iterate through the `nums` array from left to right, maintaining a running sum `leftSum` of the elements to the left of the current element.
3. For each element, calculate the sum `rightSum` of all elements to its right.
4. Calculate the absolute difference `diff` between `leftSum` and `rightSum`.
5. Store `diff` in the corresponding index of the `result` array.
6. Return the `result` array.

## Example

```c
int nums[] = {1, 2, 3, 4, 5};
int numsSize = 5;
int returnSize[1];

int* result = leftRightDifference(nums, numsSize, returnSize);
// result should be [4, 3, 2, 1, 0]
```

## Notes

- The current implementation has a time complexity of O(n^2), where n is the size of the input array.
- There might be more efficient solutions using prefix sums or other techniques.

## Possible Improvements

- Optimize the algorithm to reduce time complexity
- Handle edge cases (e.g., empty array)
- Add input validation

## Problem Link
[Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/)