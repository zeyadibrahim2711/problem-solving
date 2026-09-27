# Police Recruits

🔗 [Problem Link](https://codeforces.com/problemset/problem/427/A)

## Problem

There are `n` events happening one after another.

- A positive number represents the number of police officers recruited.
- `-1` represents a crime that needs a police officer.

If there are available police officers, one officer handles the crime.

If there are no available officers, the crime goes untreated.

The goal is to find the total number of untreated crimes.

## Idea

We keep track of the number of available police officers.

- If the current value is positive, we add it to the number of available officers.
- If the current value is `-1`:
  - If there is an available officer, use one.
  - Otherwise, increase the number of untreated crimes.

At the end, we print the number of untreated crimes.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

## Language

C++
