# Find Common Elements Between Two Arrays

## Problem Description

Given two integer arrays `nums1` and `nums2`, return an array of two integers:

- The first element is the count of elements in `nums1` that also appear in `nums2`.
- The second element is the count of elements in `nums2` that also appear in `nums1`.

## Function Signature

```c
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);
```

## Parameters

- `nums1`: An integer array
- `nums1Size`: The size of `nums1`
- `nums2`: An integer array
- `nums2Size`: The size of `nums2`
- `returnSize`: A pointer to store the size of the returned array (always 2 in this case)

## Return Value

An integer array of size 2, where:
- `result[0]` is the count of elements in `nums1` that appear in `nums2`
- `result[1]` is the count of elements in `nums2` that appear in `nums1`

## Possible Improvements

- Optimize the algorithm to reduce time complexity
- Handle edge cases (e.g., empty arrays)
- Add input validation

## Problem Link
[Find Common Elements Between Two Arrays](https://leetcode.com/problems/find-common-elements-between-two-arrays/)