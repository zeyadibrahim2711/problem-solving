# Sereja and Dima

🔗 [Problem Link](https://codeforces.com/problemset/problem/381/A)

## Problem

Sereja and Dima are playing a game using a sequence of cards.

There are `n` cards arranged in a row. On each turn, a player can take either the leftmost or the rightmost card.

The player takes the card with the larger value.

Sereja plays first, and the players continue until all cards are taken.

The goal is to find the total score of Sereja and Dima.

## Idea

We use two pointers:

- `start` points to the first card.
- `end` points to the last card.

On each turn, we compare the two cards and take the larger one.

We alternate between Sereja and Dima using a turn counter.

- Even turn → Sereja's score.
- Odd turn → Dima's score.

We continue until all cards are taken.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
