# Shaass and Oskols

🔗 [Problem Link](https://codeforces.com/problemset/problem/294/A)

## Problem

Shaass has `n` wires, and each wire contains a certain number of birds.

A shot is fired at a specific wire and a specific bird position.

- Birds to the left of the shot fly to the wire on the left.
- Birds to the right of the shot fly to the wire on the right.
- The wire that was shot becomes empty.

The goal is to determine the number of birds remaining on each wire after all shots.

## Idea

We store the number of birds on each wire in an array.

For every shot:

- Read the wire number and the bird position.
- Calculate how many birds fly to the left wire.
- Calculate how many birds fly to the right wire.
- Add the transferred birds to the neighboring wires.
- Set the number of birds on the shot wire to `0`.

Finally, print the number of birds remaining on each wire.

## Complexity

- **Time Complexity:** `O(n + m)`
- **Space Complexity:** `O(n)`

Where `n` is the number of wires and `m` is the number of shots.

## Language

C++
