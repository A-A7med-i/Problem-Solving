# Minimum Average of Smallest and Largest Elements

## Problem Statement

Given a vector of integers `nums`, the task is to find the minimum average of the smallest and largest elements in the vector.

## Approach

The provided solution follows these steps:

1. Create an empty vector `averages` to store the averages of the smallest and largest elements for each possible pair.
2. Sort the input vector `nums` in ascending order using `std::sort`.
3. Initialize two pointers `i` and `j` to point to the first and last elements of the sorted vector, respectively.
4. Iterate through the vector using a loop variable `k` from `0` to `nums.size() - 1`.
   - For each iteration, calculate the average of the elements pointed by `i` and `j` and store it in the `averages` vector.
   - Increment the pointer `i` to move to the next smallest element.
   - Decrement the pointer `j` to move to the next largest element.
5. After the loop, find the minimum value in the `averages` vector using `std::min_element`.
6. Return the minimum average value.

## Problem Link:
[Minimum Average of Smallest and Largest Elements](https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/)