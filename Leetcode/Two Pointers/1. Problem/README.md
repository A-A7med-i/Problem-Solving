## Problem: Reverse String Until Character

Given a 0-indexed string `word` and a character `ch`, reverse the segment of `word` that starts at index 0 and ends at the index of the first occurrence of `ch` (inclusive). If `ch` doesn't exist in `word`, the string remains unchanged.

### Examples

1. Input: `word = "abcdefd"`, `ch = "d"`
   Output: `"dcbaefd"` (Reverse from index 0 to 3)

2. Input: `word = "xyxzxe"`, `ch = "z"`
   Output: `"zxyxxe"` (Reverse from index 0 to 3)

3. Input: `word = "abcd"`, `ch = "z"`
   Output: `"abcd"` (No change, `z` not found)

## Solution Approach: Two-Pointer Technique

We can solve this problem using a two-pointer technique:

1. Initialize Pointers:
   - `left`: Starts at index 0.
   - `right`: Starts at the index of the first occurrence of `ch` (initialized to -1 if not found).

2. Iterate and Reverse:
   - Use a `while` loop to iterate as long as `left` is less than `right`.
   - Swap the characters at `left` and `right` indices.
   - Increment `left` and decrement `right` to move towards the middle of the segment.

3. Return the Result:
   - Return the modified `word` string.

## Problem Link:
[Reverse Prefix of Word](https://leetcode.com/problems/reverse-prefix-of-word/description/)