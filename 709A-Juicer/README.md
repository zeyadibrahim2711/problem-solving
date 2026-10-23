# Juicer

🔗 [Problem Link](https://codeforces.com/problemset/problem/709/A)

## Problem

A juicer processes oranges one by one.

You are given:

- `n`: the number of oranges.
- `b`: the maximum size of an orange that can be processed.
- `d`: the maximum amount of orange juice the juicer can hold before it must be emptied.

Each orange has a specific size.

- If an orange's size is greater than `b`, it is thrown away.
- Otherwise, the orange is processed, and its size is added to the current amount of juice.
- If the amount of juice becomes greater than `d`, the juicer is emptied, and the amount returns to zero.

The goal is to count how many times the juicer is emptied.

## Idea

We keep track of the accumulated juice and the number of times the juicer is emptied.

- Read `n`, `b`, and `d`.
- Iterate through all orange sizes.
- If an orange's size is at most `b`, add it to the accumulated amount.
- If the accumulated amount becomes greater than `d`:
  - Increase the emptying counter.
  - Reset the accumulated amount to `0`.
- Ignore oranges larger than `b`.

Finally, print the number of times the juicer was emptied.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
