# Team

🔗 [Problem Link](https://codeforces.com/problemset/problem/231/A)

## Problem

A team consists of three members.

Each member decides whether they are sure about solving a problem:

- `1` → The member is sure about the solution.
- `0` → The member is not sure.

The team will solve the problem if at least two members are sure about the solution.

The goal is to find the total number of problems the team will solve.

## Idea

For each problem, we count the number of team members who have a value of `1`.

- If at least two members are sure, the team solves the problem.
- Otherwise, the team does not solve it.

We repeat this for all problems and count the total number of solved problems.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
