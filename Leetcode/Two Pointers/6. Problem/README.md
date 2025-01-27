# Flipping an Image

## Problem Description

Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.
- For example, flipping [1,1,0] horizontally results in [0,1,1].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
- For example, inverting [0,1,1] results in [1,0,0].

## Example

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

## Approach

The solution uses a two-pointer approach to flip and invert each row of the image:

1. Iterate through each row of the image.
2. For each row, use two pointers (left and right) to swap and invert elements.
3. Move the pointers towards the center until they meet or cross.
4. Use XOR operation (^1) to invert the bits while swapping.

## Time Complexity

O(n^2), where n is the number of rows (and columns) in the image.

## Space Complexity

O(1), as the operations are performed in-place.

## Implementation

The solution is implemented in C++ and can be found in the file `Flipping an Image.cpp`.

## Usage

Include the necessary headers and use the `Solution` class to call the `flipAndInvertImage` function with your input image.

```cpp
Solution solution;
vector<vector<int>> image = {{1,1,0},{1,0,1},{0,0,0}};
vector<vector<int>> result = solution.flipAndInvertImage(image);
// Print or process the result as needed
```

## Problem Link
[Flipping an Image](https://leetcode.com/problems/flipping-an-image/description/)
