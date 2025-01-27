
# Maximum Matching of Players With Trainers

## Problem Description

You are given two integer arrays `players` and `trainers`, representing the ability of players and trainers respectively. The goal is to match players with trainers such that each player is matched with at most one trainer, and each trainer is matched with at most one player. A match is valid if the ability of the player is less than or equal to the ability of the trainer.

Return the maximum number of valid matches that can be made.

## Example

Input: players = [4,7,9], trainers = [8,2,5,8]
Output: 2
Explanation: We can match player 0 with trainer 0 and player 1 with trainer 3.

## Approach

The solution uses a two-pointer approach to find the maximum number of matches:

1. Sort both `players` and `trainers` arrays in non-decreasing order.
2. Initialize two pointers, `playerPtr` for players and `trainerPtr` for trainers, both starting at 0.
3. Initialize a counter `count` to keep track of valid matches.
4. While both pointers are within their respective array bounds:
   - If the player's ability is less than or equal to the trainer's ability, increment both pointers and the count.
   - Otherwise, increment only the trainer pointer.
5. Return the final count of valid matches.

## Time Complexity

O(n log n + m log m), where n is the length of the players array and m is the length of the trainers array, due to the sorting step.

## Space Complexity

O(1), as we only use a constant amount of extra space regardless of the input array sizes.

## Implementation

The solution is implemented in C++ and can be found in the file `Maximum Matching of Players With Trainers.cpp`.

## Usage

Include the necessary headers and use the `Solution` class to call the `matchPlayersAndTrainers` function with your input vectors.

```cpp
Solution solution;
vector<int> players = {4, 7, 9};
vector<int> trainers = {8, 2, 5, 8};
int result = solution.matchPlayersAndTrainers(players, trainers);
// Print or process the result as needed
```


## Problem Link
[Maximum Matching of Players With Trainers](https://leetcode.com/problems/maximum-matching-of-players-with-trainers/description/?envType=problem-list-v2&envId=two-pointers)