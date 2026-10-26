# Carrot Cakes

🔗 [Problem Link](https://codeforces.com/problemset/problem/799/A)

## Problem

Polycarp wants to bake `n` carrot cakes.

- The oven can bake `k` cakes at once.
- Each batch takes `t` minutes.
- A second oven can be built, which takes `d` minutes to become ready.

The goal is to determine whether building the second oven allows Polycarp to bake all the cakes strictly earlier than using only the first oven.

## Idea

We compare the baking time with one oven against the time with two ovens.

- Calculate how many batches the first oven needs.
- Calculate the time required to bake all cakes using only one oven.
- Consider when the second oven becomes available.
- If using the second oven allows all cakes to finish earlier, print `YES`.
- Otherwise, print `NO`.

## Complexity

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Language

C++
