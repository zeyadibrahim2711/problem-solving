# Vanya and Fence

🔗 [Problem Link](https://codeforces.com/problemset/problem/677/A)

## Problem

There are `n` friends who want to pass through a fence.

- If a person's height is greater than `h`, they need a width of `2`.
- Otherwise, they need a width of `1`.

The goal is to calculate the total width required for all friends.

## Idea

We read each person's height and check whether it is greater than the fence height.

- If `person > heightOfFence`, add `2` to the total width.
- Otherwise, add `1`.

After checking all friends, we print the total width.

## Algorithm

1. Read the number of friends `n` and the fence height `h`.
2. Initialize `width` with `0`.
3. Loop through all friends.
4. Read each person's height.
5. If the person's height is greater than `h`, add `2`.
6. Otherwise, add `1`.
7. Print the total width.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

## Language

C++
