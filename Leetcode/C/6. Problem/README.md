# Substrings of Size Three with Distinct Characters

## Problem Description

Given a string `s`, return the number of good substrings of length three in `s`.

A good substring is a substring of length three that contains three distinct characters.

## Function Signatures

```c
int countGoodSubstrings(char* s);
bool isGoodSubstring(char* subStr);
```

## Parameters

- `s`: A string to be analyzed
- `subStr`: A substring of length 3 to be checked

## Return Value

- `countGoodSubstrings`: Returns the count of good substrings
- `isGoodSubstring`: Returns true if the substring is good, false otherwise

## Algorithm

The main function `countGoodSubstrings` uses the following approach:
1. Get the length of the input string.
2. Iterate through the string, considering each substring of length 3.
3. For each substring, call `isGoodSubstring` to check if it's good.
4. Count the number of good substrings.

The helper function `isGoodSubstring`:
1. Checks if any two characters in the 3-character substring are the same.
2. Returns true if all characters are distinct, false otherwise.

## Example

```c
char s[] = "xyzzaz";
int result = countGoodSubstrings(s);
// result should be 1 (the good substring is "xyz")
```

## Time and Space Complexity

- Time Complexity: O(n), where n is the length of the string. We iterate through the string once, and each check is constant time.
- Space Complexity: O(1), as we only use a constant amount of extra space.

## Notes

- The function assumes that the input string is null-terminated.
- It correctly handles strings shorter than 3 characters by returning 0.
- The implementation is case-sensitive, treating uppercase and lowercase letters as distinct characters.

## Possible Improvements

- Add input validation to check if the string pointer is null.
- Consider using a more efficient method to check for distinct characters, such as a bit manipulation technique.
- Implement a version that works with a specified substring length instead of always using 3.
- Add handling for Unicode characters if needed.

## Problem Link
[Substrings of Size Three with Distinct Characters](https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/)