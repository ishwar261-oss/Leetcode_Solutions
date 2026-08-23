# 1927. Sum Game

## Problem

You are given a string `num` of even length.

The string contains digits and `?`.

Alice and Bob take turns replacing `?` with a digit from `0` to `9`.

After all `?` are replaced, divide the string into two equal halves.

- Alice wins if the sum of digits in both halves is different.
- Bob wins if the two sums are equal.

Alice makes the first move.

Return `true` if Alice wins, otherwise return `false`.

## Example

```text
Input:
num = "5023"

Output:
false