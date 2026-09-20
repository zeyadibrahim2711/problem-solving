# Stones on the Table

🔗 [Problem Link](https://codeforces.com/problemset/problem/266/A)

## Problem

There are `n` stones placed in a row, and each stone has a color represented by a character.

The goal is to find the minimum number of stones that need to be removed so that no two adjacent stones have the same color.

## Idea

We compare each stone with the next stone.

- If two adjacent stones have the same color, one of them must be removed.
- We increase the number of removals.

After checking all adjacent stones, we print the total number of stones that need to be removed.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
