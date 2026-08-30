# Gravity Flip

🔗 [Problem Link](https://codeforces.com/problemset/problem/405/A)

## Problem

We are given `n` columns with different heights.

After applying gravity, the columns will be arranged in non-decreasing order of their heights.

The goal is to output the heights of the columns after applying gravity.

## Idea

We store the heights of all columns in an array.

Then, we sort the array in ascending order using `sort()`.

Finally, we print the sorted heights.

## Complexity

- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(n)`

## Language

C++
