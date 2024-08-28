# Missing Number

## Problem Description

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

## Function Signature
```c
int missingNumber(int nums, int numsSize);
```

## Parameters

- `nums`: An array of integers
- `numsSize`: The size of the `nums` array

## Return Value

The missing number from the range `[0, n]`.

## Algorithm

The function uses the following approach:
1. Calculate the expected sum of numbers from 0 to n using the formula: `n * (n + 1) / 2`.
2. Calculate the actual sum of numbers in the given array.
3. The difference between the expected sum and the actual sum is the missing number.

## Example

```c
int nums[] = {3, 0, 1};
int numsSize = 3;
int result = missingNumber(nums, numsSize);
// result should be 2
```

## Time and Space Complexity

- Time Complexity: O(n), where n is the size of the input array.
- Space Complexity: O(1), as it uses only a constant amount of extra space.

## Notes

- The function assumes that the input array contains distinct numbers in the range [0, n].
- This solution uses the mathematical approach to find the missing number, which avoids the need for sorting or using extra space.

## Problem Link
[Missing Number](https://leetcode.com/problems/missing-number/description/)