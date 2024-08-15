# Find if Digit Game Can Be Won

## Problem Description

Given an array of integers `nums`, determine if Alice can win a digit game against Bob. The game rules are as follows:

- Alice and Bob take turns playing.
- In each turn, a player chooses a number from the array and removes it.
- The game ends when all numbers are removed.
- Alice wins if the sum of all single-digit numbers she picked is greater than the sum of all two-digit (or larger) numbers Bob picked.
- Bob wins if the sum of his picked numbers is greater than Alice's sum.

## Function Signature

```c
bool canAliceWin(int* nums, int numsSize);
```

## Parameters

- `nums`: An integer array representing the numbers in the game
- `numsSize`: The size of the `nums` array

## Return Value

- `true` if Alice can win the game
- `false` if Alice cannot win the game

## Algorithm

The current implementation uses the following strategy:
1. Iterate through the array once.
2. Sum up all single-digit numbers (Alice's potential score).
3. Sum up all two-digit (or larger) numbers (Bob's potential score).
4. If Alice's potential score is greater than Bob's potential score, return `true`.
5. Otherwise, return `false`.

## Example

```c
int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int numsSize = 12;

bool result = canAliceWin(nums, numsSize);
// result should be true
```

## Notes

- The current implementation has a time complexity of O(n), where n is the size of the input array.
- The algorithm assumes that Alice and Bob play optimally, i.e., they choose the numbers that maximize their score.
- There might be more efficient solutions or alternative strategies to solve this problem.

## Possible Improvements

- Optimize the algorithm to reduce time complexity
- Handle edge cases (e.g., empty array)
- Add input validation
- Explore alternative strategies or algorithms to solve the problem

## Problem Link
[Find if Digit Game Can Be Won](https://leetcode.com/problems/find-if-digit-game-can-be-won/)