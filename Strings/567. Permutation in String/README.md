# 567. Permutation in String

## Problem

Given two strings `s1` and `s2`, determine whether `s2` contains a permutation of `s1` as a substring.

A permutation means the characters are the same, but their order can be different.

## Example

```text
Input:
s1 = "ab"
s2 = "eidbaooo"

Output:
true
```

### Explanation

The substring:

```text
"ba"
```

is a permutation of:

```text
"ab"
```

Therefore, the answer is:

```text
true
```

## Example 2

```text
Input:
s1 = "ab"
s2 = "eidboaoo"

Output:
false
```

There is no substring containing exactly the same characters as `"ab"`.

## Approach

Use the **sliding window** technique.

The length of every possible permutation of `s1` must be exactly:

```text
s1.length()
```

So, maintain a window of the same size in `s2`.

For example:

```text
s1 = "ab"
```

Check windows of size `2`:

```text
ei
id
db
ba  ← permutation found
ao
oo
```

Keep character frequencies for:

```text
s1
```

and the current window in:

```text
s2
```

If their frequencies are equal, the window is a permutation of `s1`.

## Algorithm

1. If `s1` is longer than `s2`, return `false`.
2. Create frequency arrays of size `26`.
3. Count characters in `s1`.
4. Create a sliding window of size `s1.length()`.
5. Add the current character to the window.
6. When the window becomes larger than `s1.length()`, remove the leftmost character.
7. Compare the two frequency arrays.
8. If they are equal, return `true`.
9. If no window matches, return `false`.

## Example Walkthrough

```text
s1 = "ab"
s2 = "eidbaooo"
```

Required frequency:

```text
a → 1
b → 1
```

Window:

```text
ei
```

Not equal.

Move the window:

```text
id
```

Not equal.

Move again:

```text
db
```

Not equal.

Move again:

```text
ba
```

Frequency:

```text
b → 1
a → 1
```

Same as `s1`.

Therefore:

```text
true
```

## Key Idea

The order of characters does not matter.

For:

```text
"ab"
"ba"
```

both have the same frequency:

```text
a → 1
b → 1
```

So frequency counting allows us to detect permutations.

## Sliding Window

```text
s2 = e i d b a o o o
     └───┘
      window

       → move →

       └───┘
```

The window always contains exactly `s1.length()` characters.

## Complexity

### Time Complexity

```text
O(n)
```

Each character enters and leaves the sliding window at most once.

### Space Complexity

```text
O(1)
```

Only two arrays of size `26` are used.

## Concepts Used

- Strings
- Sliding Window
- Frequency Counting
- Character Arrays
- Two Pointers
- Permutations
```