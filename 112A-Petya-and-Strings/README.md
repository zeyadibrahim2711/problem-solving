# Petya and Strings

🔗 [Problem Link](https://codeforces.com/problemset/problem/112/A)

## Problem

Petya wants to compare two strings lexicographically without considering the difference between uppercase and lowercase letters.

The goal is to compare the two strings and print:

- `1` if the first string is greater.
- `-1` if the second string is greater.
- `0` if both strings are equal.

## Idea

First, we convert all characters in both strings to lowercase.

Then, we compare the two strings lexicographically using the standard string comparison operators.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
