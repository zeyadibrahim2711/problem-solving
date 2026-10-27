# Anton and Letters

🔗 [Problem Link](https://codeforces.com/problemset/problem/443/A)

## Problem

Anton has a set of lowercase Latin letters represented by a string in the form `{a, b, c}`.

The set may be empty and can contain repeated letters.

The goal is to find the number of distinct letters in the set.

## Idea

We use a `set<char>` to store distinct letters.

- Read the entire input line.
- Iterate through each character.
- Ignore braces `{}`, commas `,`, and spaces.
- Insert the remaining characters into the set.
- Since a set stores only unique elements, its size gives the number of distinct letters.

Finally, print the size of the set.

## Complexity

- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(n)`

Where `n` is the length of the input string.

## Language

C++
