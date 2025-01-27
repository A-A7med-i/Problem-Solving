# Number of Arithmetic Triplets

## Problem Description

Given a 0-indexed, strictly increasing integer array `nums` and a positive integer `diff`, find the number of unique arithmetic triplets.

An arithmetic triplet is a triplet (i, j, k) that satisfies the following conditions:
1. i < j < k
2. nums[j] - nums[i] == diff
3. nums[k] - nums[j] == diff

## Examples

### Example 1:
Input: nums = [0,1,4,6,7,10], diff = 3
Output: 2
Explanation:
- (1, 2, 4) is an arithmetic triplet because 7 - 4 == 3 and 4 - 1 == 3.
- (2, 4, 5) is an arithmetic triplet because 10 - 7 == 3 and 7 - 4 == 3.

### Example 2:
Input: nums = [4,5,6,7,8,9], diff = 2
Output: 2
Explanation:
- (0, 2, 4) is an arithmetic triplet because 8 - 6 == 2 and 6 - 4 == 2.
- (1, 3, 5) is an arithmetic triplet because 9 - 7 == 2 and 7 - 5 == 2.

## Constraints

- 3 <= nums.length <= 200
- 0 <= nums[i] <= 200
- 1 <= diff <= 50
- nums is strictly increasing

## Solution Approach

The solution uses a three-pointer approach to iterate through the array and find arithmetic triplets. It employs a set to ensure uniqueness of the triplets counted.

## Time Complexity

The time complexity of the solution is O(n^3) in the worst case, where n is the length of the input array.



## Problem Link:
[Number of Arithmetic Triplets](https://leetcode.com/problems/number-of-arithmetic-triplets/description/)