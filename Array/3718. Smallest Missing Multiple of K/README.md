# 3718. Smallest Missing Multiple of K

## Problem

Given an array `nums` and an integer `k`, find the **smallest positive multiple of `k`** that does not appear in `nums`.

The multiples of `k` are:

```text
k, 2k, 3k, 4k, ...
```

We need to find the first missing one.

## Example

```text
Input:
nums = [8, 2, 3, 4, 6]
k = 2

Output:
10
```

### Explanation

Multiples of `2` are:

```text
2, 4, 6, 8, 10, ...
```

Present in the array:

```text
2 ✓
4 ✓
6 ✓
8 ✓
```

`10` is missing.

Therefore:

```text
Answer = 10
```

## Approach

We only care about numbers that are multiples of `k`.

For every number in the array:

```text
if num % k == 0
```

then it is a multiple of `k`.

We mark which multiples are present.

Then check:

```text
k
2k
3k
4k
...
```

The first unmarked multiple is the answer.

## Example Walkthrough

```text
nums = [2, 4, 6, 8]
k = 2
```

Multiples:

```text
2 → present
4 → present
6 → present
8 → present
```

Next:

```text
10 → missing
```

So:

```text
Output = 10
```

## Why No Map Is Needed

We don't need a `map` or `unordered_map`.

Since we only need to check multiples of `k`, a simple boolean array is enough:

```text
present[1] → k
present[2] → 2k
present[3] → 3k
...
```

For example, when:

```text
k = 5
```

we have:

```text
present[1] → 5
present[2] → 10
present[3] → 15
```

## Algorithm

1. Create a boolean array.
2. Traverse `nums`.
3. Check whether each number is divisible by `k`.
4. Mark its corresponding multiple.
5. Start checking from `k`.
6. Return the first missing multiple.

## Key Idea

```text
k → 2k → 3k → 4k → 5k
             ↑
        first missing
             ↓
           Answer
```

## Complexity

### Time Complexity

```text
O(n)
```

We traverse the array once and then check at most `n` multiples.

### Space Complexity

```text
O(n)
```

We use a boolean array of size `n + 1`.

## Concepts Used

- Arrays
- Modulo `%`
- Multiples
- Boolean Array
- Array Traversal
- Searching
- Space-Time Optimization