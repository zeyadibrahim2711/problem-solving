# Colorful Stones (Simplified Edition)

🔗 [Problem Link](https://codeforces.com/problemset/problem/265/A)

## Problem

Little girl Susie has a sequence of stones represented by string `s`.

She moves along the stones according to the characters in string `t`.

Initially, she stands on the first stone. For each character in `t`, if it matches the character of the stone she currently stands on, she moves to the next stone.

The goal is to find the final position of Susie.

## Idea

We keep track of the current position using `Counter`, starting at `0`.

- Read strings `s` and `t`.
- Iterate through each character in `t`.
- If the current character matches `s[Counter]`, increment `Counter`.
- After processing all characters, print `Counter + 1` to get the final position using 1-based indexing.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

Where `n` is the length of string `t`.

## Language

C++
