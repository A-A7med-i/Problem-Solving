# Reverse Only Letters

## Problem Description

Given a string `s`, reverse the string according to the following rules:

1. All the characters that are not English letters remain in the same position.
2. All the English letters (lowercase or uppercase) should be reversed.

Return `s` after reversing it.

## Function Signature

```c
char* reverseOnlyLetters(char* s);
```

## Parameters

- `s`: A string to be reversed according to the given rules

## Return Value

- Returns the modified string with only letters reversed

## Algorithm

The function `reverseOnlyLetters` uses a two-pointer approach:
1. Initialize two pointers, `left` at the start and `right` at the end of the string.
2. While `left` is less than `right`:
   - If the character at `left` is not a letter, increment `left`.
   - If the character at `right` is not a letter, decrement `right`.
   - If both characters are letters, swap them and move both pointers inward.
3. Return the modified string.

## Example

```c
char s[] = "ab-cd";
char* result = reverseOnlyLetters(s);
// result should be "dc-ba"
```

## Time and Space Complexity

- Time Complexity: O(n), where n is the length of the string. We iterate through the string once.
- Space Complexity: O(1), as we modify the string in-place and use only a constant amount of extra space.

## Notes

- The function uses the `isalpha()` function from `<ctype.h>` to check if a character is a letter.
- The implementation modifies the input string in-place.
- It correctly handles strings with non-alphabetic characters.

## Possible Improvements

- Add input validation to check if the string pointer is null.
- Consider using a more efficient method to check for alphabetic characters if needed for very large strings.
- Implement a version that creates a new string instead of modifying the input string, if in-place modification is not desired.

## Problem Link
[Reverse Only Letters](https://leetcode.com/problems/reverse-only-letters/)