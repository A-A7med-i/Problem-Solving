# Remove Trailing Zeros From a String

## Problem Description

Given a non-negative integer represented as a string `num`, remove all trailing zeros from the string and return the resulting string.

## Function Signature

```c
char* removeTrailingZeros(char* num);
```

## Parameters

- `num`: A string representing a non-negative integer

## Return Value

A string with all trailing zeros removed.

## Algorithm

The function uses the following approach:
1. Find the length of the input string.
2. Start from the end of the string and move towards the beginning.
3. Find the first non-zero character from the end.
4. Place a null terminator right after this character to effectively remove all trailing zeros.

## Example

```c
char num[] = "51230100";
char* result = removeTrailingZeros(num);
// result should be "512301"
```

## Time and Space Complexity

- Time Complexity: O(n), where n is the length of the input string.
- Space Complexity: O(1), as the modification is done in-place.

## Notes

- The function modifies the input string directly and returns a pointer to the same string.
- It assumes that the input is a valid string representing a non-negative integer.
- The function handles the case where all digits are zeros by keeping at least one zero

## Problem Link
[Remove Trailing Zeros From a String](https://leetcode.com/problems/remove-trailing-zeros-from-a-string/)