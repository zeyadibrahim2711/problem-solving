# Boy or Girl

🔗 [Problem Link](https://codeforces.com/problemset/problem/236/A)

## Problem

A user enters a username consisting of lowercase English letters.

If the number of distinct characters in the username is even, the user is considered a girl.

Otherwise, the user is considered a boy.

The goal is to determine whether to print:

- `CHAT WITH HER!` if the number of distinct characters is even.
- `IGNORE HIM!` if the number of distinct characters is odd.

## Idea

First, we sort the string so that equal characters become adjacent.

Then, we count the number of distinct characters by comparing each character with the next one.

Finally, we check whether the number of distinct characters is even or odd.

## Complexity

- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(n)`

## Language

C++
