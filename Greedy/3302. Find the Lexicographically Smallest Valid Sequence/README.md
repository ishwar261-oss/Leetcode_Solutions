# 3302. Find the Lexicographically Smallest Valid Sequence

## Problem

Given two strings `word1` and `word2`, find the lexicographically smallest sequence of indices from `word1` such that the selected characters can be changed at most once to form `word2`.

The indices must be in strictly increasing order.

If no valid sequence exists, return an empty array.

---

## Approach

This solution uses:

- Greedy
- Two Pointers
- Suffix Feasibility

The main idea is that we are allowed to have **at most one mismatch** between the selected characters and `word2`.

### Step 1: Build the `last` Array

Traverse `word1` from right to left.

For every character in `word2`, store the latest possible index in `word1` that can match it.

This helps determine whether the remaining part of `word2` can still be matched after using the one allowed mismatch.

---

### Step 2: Greedy Traversal

Traverse `word1` from left to right.

There are three cases:

### Case 1: Characters Match

If:

```text
word1[i] == word2[j]
```

select index `i`.

---

### Case 2: Characters Do Not Match

If the mismatch has not been used yet, we can select the current index if the remaining characters of `word2` can still be matched.

Then mark the mismatch as used.

---

### Case 3: Cannot Use the Mismatch

Skip the current character and continue searching.

---

## Example

### Input

```text
word1 = "vbcca"
word2 = "abc"
```

### Output

```text
[0, 1, 2]
```

### Explanation

The selected characters are:

```text
vbc
```

Change `v` to `a`:

```text
abc
```

Only one modification is required.

---

## Another Example

### Input

```text
word1 = "bacdc"
word2 = "abc"
```

### Output

```text
[1, 2, 4]
```

The selected characters can be changed at most once to form `abc`.

---

## Algorithm

1. Create a `last` array for `word2`.
2. Traverse `word1` from right to left to calculate the latest matching positions.
3. Traverse `word1` from left to right.
4. If the current characters match, select the index.
5. If they don't match and the modification has not been used:
   - Check whether the remaining suffix is possible.
   - Select the current index.
   - Mark the modification as used.
6. Otherwise, skip the current index.
7. If all characters of `word2` are selected, return the answer.
8. Otherwise, return an empty vector.

---

## Complexity

### Time Complexity

```text
O(n + m)
```

where:

- `n = word1.length()`
- `m = word2.length()`

### Space Complexity

```text
O(m)
```

because the `last` array has size `m`.

---

## Concepts Used

- Greedy Algorithm
- Two Pointers
- Strings
- Subsequence
- Lexicographical Order
- Suffix Feasibility

---

## Tags

`String` `Greedy` `Two Pointers` `Subsequence`