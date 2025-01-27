# Find First Palindromic String in the Array

## Problem Description

Given an array of strings, this problem requires finding and returning the first palindromic string in the array. If no palindromic string exists, an empty string should be returned.

## Solution Approach

The solution uses a two-pointer technique to check if a string is palindromic and iterates through the array to find the first palindrome.

### Key Components:

1. `isPalindromic` function:
   - Uses two pointers (left and right) to compare characters from both ends of the string.
   - Returns true if the string is a palindrome, false otherwise.

2. `firstPalindrome` function:
   - Iterates through the input array of strings.
   - Calls `isPalindromic` for each string.
   - Returns the first string that is a palindrome.
   - If no palindrome is found, returns an empty string.

## Time Complexity

- O(n * m), where n is the number of strings in the array and m is the average length of the strings.

## Space Complexity

- O(1), as it uses constant extra space regardless of input size.

## Usage

```cpp
Solution solution;
vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
string result = solution.firstPalindrome(words);
cout << "First palindrome: " << result << endl;
```

## Problem Link:
[Find First Palindromic String in the Array](https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/)