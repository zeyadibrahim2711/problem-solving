# Buy a Shovel

🔗 [Problem Link](https://codeforces.com/problemset/problem/732/A)

## Problem

Polycarp wants to buy a shovel.

The price of one shovel is `K` burles, and he wants to buy several shovels.

He can pay only if the total price ends with digit `0` or digit `r`.

The goal is to find the minimum number of shovels Polycarp needs to buy so that the total price satisfies this condition.

## Idea

We start with buying one shovel.

For each number of shovels:

* Calculate the total price: `K × NumOfShv`.
* Check the last digit of the total price.
* If the last digit is `0` or `r`, return the current number of shovels.
* Otherwise, increase the number of shovels and try again.

## Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

Where `n` is the minimum number of shovels required.

## Language

C++
