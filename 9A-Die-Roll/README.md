# Die Roll

🔗 [Problem Link](https://codeforces.com/problemset/problem/9/A)

## Problem

Yash has a die, and his friend rolls a die as well.

You are given two integers `Y` and `W`, representing the results of their dice rolls.

Both players want to know the probability that Yash gets a number greater than or equal to his friend's result on his next roll.

The die has six equally likely outcomes, from `1` to `6`.

The goal is to express this probability as a simplified fraction.

## Idea

We find the larger of the two given values.

- Determine the maximum value between `Y` and `W`.
- Count the possible outcomes from that value to `6`.
- The total number of possible outcomes is `6`.
- Simplify the fraction by dividing the numerator and denominator by their greatest common divisor (GCD).
- Print the resulting fraction.

## Complexity

- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

## Language

C++
