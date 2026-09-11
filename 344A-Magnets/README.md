# Magnets

🔗 [Problem Link](https://codeforces.com/problemset/problem/344/A)

## Problem

There are `n` magnets placed one after another.

Each magnet is represented by a string describing its poles.

If two consecutive magnets have different configurations, they form a new group.

The goal is to find the total number of groups of magnets.

## Idea

We store the configuration of each magnet in an array.

Then, we compare each magnet with the next one.

- If the current magnet is different from the next magnet, we found a new group.
- We increase the number of groups.

Finally, we print the total number of groups.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
