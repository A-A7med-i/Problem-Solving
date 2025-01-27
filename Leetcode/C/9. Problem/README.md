# Number of Changing Keys

## Problem Description

Given a string `s` consisting of lowercase and uppercase English letters, return the number of times you need to change the case of a letter to make all the letters in the string have the same case (either all lowercase or all uppercase).

Changing the case of a letter means converting a lowercase letter to uppercase or vice versa.

## Function Signature
```c
int countKeyChanges(char s);
```
## Parameters

- `s`: A string consisting of lowercase and uppercase English letters

## Return Value

- Returns the number of case changes required to make all letters in the string have the same case

## Algorithm

The function `countKeyChanges` uses the following approach:
1. Get the length of the input string.
2. Initialize a counter for case changes.
3. Iterate through the string, comparing each character with the next one.
4. If the lowercase versions of adjacent characters are different, increment the counter.
5. Return the final count minus 1 (as the last comparison is with a null terminator).

## Example

```c
char s[] = "aAbBcC";
int result = countKeyChanges(s);
// result should be 2 (change 'b' to 'B' and 'c' to 'C', or vice versa)
```

## Time and Space Complexity

- Time Complexity: O(n), where n is the length of the string. We iterate through the string once.
- Space Complexity: O(1), as we only use a constant amount of extra space.

## Notes

- The function assumes that the input string is null-terminated.
- It correctly handles empty strings by returning -1.
- The implementation is case-insensitive, considering 'a' and 'A' as the same key.

## Possible Improvements

- Add input validation to check if the string pointer is null.
- Consider using a more efficient method to compare characters, such as bitwise operations.
- Implement error handling for invalid input characters (non-alphabetic characters).

## Problem Link
[Number of Changing Keys](https://leetcode.com/problems/number-of-changing-keys/description/)