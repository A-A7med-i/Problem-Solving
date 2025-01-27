# Minimum Common Value

## Problem Description

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order. Find the minimum integer common to both arrays. If there is no common integer between nums1 and nums2, return -1.

Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.

## Example

Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest common integer is 2.

## Approach

The solution uses a two-pointer approach to find the minimum common value:

1. Initialize two pointers, i for nums1 and j for nums2, both starting at 0.
2. Compare the elements at nums1[i] and nums2[j]:
   - If they are equal, return this value as it's the minimum common value.
   - If nums1[i] < nums2[j], increment i to move to the next element in nums1.
   - If nums1[i] > nums2[j], increment j to move to the next element in nums2.
3. Continue this process until we find a common value or reach the end of either array.
4. If no common value is found, return -1.

## Time Complexity

O(min(n, m)), where n and m are the lengths of nums1 and nums2 respectively.

## Space Complexity

O(1), as we only use two pointers regardless of the input array sizes.

## Implementation

The solution is implemented in C++ and can be found in the file `Minimum Common Value.cpp`.

## Usage

Include the necessary headers and use the `Solution` class to call the `getCommon` function with your input vectors.

```cpp
Solution solution;
vector<int> nums1 = {1, 2, 3};
vector<int> nums2 = {2, 4};
int result = solution.getCommon(nums1, nums2);
// Print or process the result as needed
```

## Problem Link
[Minimum Common Value](https://leetcode.com/problems/minimum-common-value/description/?envType=problem-list-v2&envId=two-pointers&difficulty=EASY&status=TO_DO%2CSOLVED)