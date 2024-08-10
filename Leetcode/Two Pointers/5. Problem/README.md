# Reverse Words in a String III

## Problem Description

Given a string `s`, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

## Example

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

## Approach

The solution uses a two-pointer approach to reverse each word in the string:

1. Iterate through the string.
2. Skip any leading spaces.
3. Find the start and end of each word.
4. Reverse the characters within each word.
5. Move to the next word and repeat steps 2-4.

## Time Complexity

O(n), where n is the length of the input string.

## Space Complexity

O(1), as the reversal is done in-place.

## Implementation

The solution is implemented in C++ and can be found in the file `Reverse Words in a String III.cpp`.

## Usage

Include the necessary headers and use the `Solution` class to call the `reverseWords` function with your input string.

```cpp
Solution solution;
string result = solution.reverseWords("Hello World");
cout << result << endl; // Output: "olleH dlroW"
```

## Problem Link:
[Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/description/)