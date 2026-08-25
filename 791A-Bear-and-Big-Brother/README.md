# Bear and Big Brother

🔗 [Problem Link](https://codeforces.com/problemset/problem/791/A)

## Problem

Limak and Bob have different weights.

Each year:

- Limak's weight is multiplied by `3`.
- Bob's weight is multiplied by `2`.

The goal is to find the number of years needed for Limak to become heavier than Bob.

## Idea

We simulate the growth year by year.

- Multiply Limak's weight by `3`.
- Multiply Bob's weight by `2`.
- Increase the number of years.

We continue until Limak's weight becomes greater than Bob's weight.

## Complexity

- **Time Complexity:** `O(log n)`
- **Space Complexity:** `O(1)`

## Language

C++
