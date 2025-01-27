# Maximum Product Difference Between Two Pairs

## Problem Description

Given an integer array `nums`, find two pairs of integers (a, b) and (c, d) such that:

- a, b, c, and d are distinct elements from nums
- a * b is the maximum product among all possible pairs in nums
- c * d is the minimum product among all possible pairs in nums

Return the maximum product difference between these two pairs, i.e., (a * b) - (c * d).

## Function Signature

```c
int maxProductDifference(int* nums, int numsSize);
```

## Parameters

- `nums`: An integer array of input numbers
- `numsSize`: The size of the `nums` array

## Return Value

An integer representing the maximum product difference between the maximum and minimum product pairs.

## Example

```c
int nums[] = {5, 6, 2, 7, 4};
int numsSize = 5;
int result = maxProductDifference(nums, numsSize);
// result should be 34 (6 * 7 - 2 * 4)
```

## Notes

- The current implementation has a time complexity of O(n^2), where n is the size of the input array.
- There might be more efficient solutions using sorting or other techniques.

## Possible Improvements

- Optimize the algorithm to reduce time complexity
- Handle edge cases (e.g., empty array, array with only one or two elements)
- Add input validation

## Problem Link
[Maximum Product Difference Between Two Pairs](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/)