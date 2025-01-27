# Merge Strings Alternately

## Problem Description

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

## Function Signature

```cpp
string mergeAlternately(string word1, string word2);
```

## Parameters

- `word1`: The first input string
- `word2`: The second input string

## Return Value

- Returns the merged string alternating between characters from `word1` and `word2`

## Algorithm

The function `mergeAlternately` uses a two-pointer approach:
1. Initialize two pointers, `ptr1` for `word1` and `ptr2` for `word2`, both starting at 0.
2. While both pointers are within their respective string lengths:
   - Append the character from `word1` at `ptr1` to the result string and increment `ptr1`.
   - Append the character from `word2` at `ptr2` to the result string and increment `ptr2`.
3. If there are remaining characters in `word1`, append them to the result string.
4. If there are remaining characters in `word2`, append them to the result string.
5. Return the merged string.

## Example

```cpp
string word1 = "abc";
string word2 = "pqr";
string result = Solution().mergeAlternately(word1, word2);
// result should be "apbqcr"
```

## Time and Space Complexity

- Time Complexity: O(n + m), where n and m are the lengths of `word1` and `word2` respectively. We iterate through both strings once.
- Space Complexity: O(n + m) to store the merged string.

## Notes

- The implementation uses C++ string concatenation, which may not be the most efficient for very large strings.
- The function handles strings of different lengths correctly.

## Possible Improvements

- Use a string builder or reserve space for the result string to improve performance for large inputs.
- Add input validation to check if the input strings are empty.
- Consider using a more memory-efficient approach if working with very large strings.

## Problem Link
[Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/)
