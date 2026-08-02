# 3016. Minimum Number of Pushes to Type Word II

## Problem

You are given a string `word`.

A phone keypad has **8 keys**, and you can assign letters to the keys in any way you want.

Find the minimum number of key presses required to type the word.

---

## Approach

- Count the frequency of each letter.
- Sort the frequencies in descending order.
- Assign:
  - First 8 most frequent letters → 1 push
  - Next 8 letters → 2 pushes
  - Next 8 letters → 3 pushes
  - Remaining letters → 4 pushes
- Multiply each frequency by its assigned push count and sum the results.

---

## Algorithm

1. Count the frequency of each character.
2. Sort the frequencies in descending order.
3. Traverse the sorted frequencies.
4. For each frequency:
   - Push count = `(index / 8) + 1`
   - Add `frequency × push count` to the answer.
5. Return the answer.

---

## Example

### Input

```
abcabc
```

### Output

```
6
```

### Explanation

Each of the three letters appears twice and can be assigned to the first push level:

- a → 2 pushes
- b → 2 pushes
- c → 2 pushes

Total = **6**.

---

## Complexity

- **Time Complexity:** `O(n + 26 log 26)` ≈ `O(n)`
- **Space Complexity:** `O(26)` ≈ `O(1)`

---

## Concepts Used

- Greedy
- Hashing (Frequency Count)
- Sorting

---

## Tags

`Greedy` `Hash Table` `Sorting` `String`