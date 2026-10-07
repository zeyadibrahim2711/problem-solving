# Games

🔗 [Problem Link](https://codeforces.com/problemset/problem/268/A)

## Problem

There are `n` football teams.

Each team has a home uniform color and an away uniform color.

Every team plays against every other team twice:

* Once at home.
* Once away.

When a team plays at home, its home uniform color may be the same as the visiting team's away uniform color.

The goal is to find the total number of games where the home team's uniform color matches the visiting team's away uniform color.

## Idea

We store the home and away colors of all teams.

For every pair of different teams:

* Compare the home color of one team with the away color of the other team.
* If both colors match, count `2` games because the two teams will play each other twice.
* If only one color matches, count `1` game.

At the end, we print the total number of games where the home and away uniform colors are the same.

## Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(n)`

## Language

C++
