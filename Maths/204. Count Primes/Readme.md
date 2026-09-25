# 204. Count Primes

## Problem

Given an integer `n`, return the number of prime numbers that are **strictly less than `n`**.

### Example

Input:

n = 10

Output:

4

Explanation:

The prime numbers less than 10 are:

2, 3, 5, 7

Therefore:

Answer = 4

---

## Approach

Use the **Sieve of Eratosthenes**.

Instead of checking every number individually, assume every number is prime initially.

Then for every prime number, mark all of its multiples as non-prime.

For example:

```text
2 → mark 4, 6, 8, 10, ...
3 → mark 6, 9, 12, ...
5 → mark 10, 15, 20, ...