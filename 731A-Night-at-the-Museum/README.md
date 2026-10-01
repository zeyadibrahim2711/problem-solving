# Night at the Museum

🔗 [Problem Link](https://codeforces.com/problemset/problem/731/A)

## Problem

There is a circular alphabet from `a` to `z`.

The pointer starts at the letter `a`. For each character in the given string, the pointer must rotate to that character.

The goal is to find the minimum total number of rotations needed to type the entire string.

## Idea

We keep track of the current letter, starting from `a`.

For each character in the string:

* Calculate the absolute difference between the current letter and the target letter.
* There are two possible directions around the circular alphabet.
* Take the smaller distance:

  * Direct distance: `Result`
  * Circular distance: `26 - Result`
* Add the smaller distance to the total steps.
* Update the current letter to the target letter.

At the end, we print the total number of steps.

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`

Where `n` is the length of the string.

## Language

C++
