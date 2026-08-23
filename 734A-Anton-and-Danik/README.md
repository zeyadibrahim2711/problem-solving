# Anton and Danik

🔗 [Problem Link](https://codeforces.com/problemset/problem/734/A)

## Problem

Anton and Danik are playing `n` football games.

Each game result is represented by a character:

- `A` → Anton wins.
- `D` → Danik wins.

The goal is to determine who won more games.

- If Anton wins more games, print `Anton`.
- If Danik wins more games, print `Danik`.
- If both win the same number of games, print `Friendship`.

## Idea

We count the number of games won by Anton and Danik.

- If the current character is `A`, increase Anton's score.
- Otherwise, increase Danik's score.

After checking all games, we compare their scores and print the result.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

## Language

C++
