# Beautiful Matrix

🔗 [Problem Link](https://codeforces.com/problemset/problem/263/A)

## Problem

We are given a `5 × 5` matrix containing twenty-four `0`s and exactly one `1`.

The goal is to move the `1` to the center of the matrix using the minimum number of moves.

The center position is:

- Row `3`
- Column `3`

In the program, using zero-based indexing, the center is at:

- Row `2`
- Column `2`

In each move, the `1` can move one position up, down, left, or right.

## Idea

First, we find the position of the `1` in the matrix.

Then, we calculate the Manhattan distance between its position and the center:

`|row - 2| + |column - 2|`

This gives the minimum number of moves required.

## Complexity

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Language

C++
