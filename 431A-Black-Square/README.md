# Black Square

🔗 [Problem Link](https://codeforces.com/problemset/problem/431/A)

## Problem

There are four types of black squares, and each type has a specific number of calories.

A string contains digits from `1` to `4`, where each digit represents a black square of the corresponding type.

The goal is to calculate the total number of calories consumed by all the squares in the string.

## Idea

We keep track of the calorie value for each square type.

* Read the four calorie values.
* Read the string representing the squares.
* For each type from `1` to `4`:

  * Count how many times its corresponding digit appears in the string.
  * Multiply the number of occurrences by its calorie value.
* Add all the calculated calories together.

At the end, we print the total number of calories.

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`

Where `n` is the length of the string.

## Language

C++
