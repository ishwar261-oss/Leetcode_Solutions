# 3014. Minimum Number of Pushes to Type Word I

## Problem

You are given a string `word`.

A telephone keypad has **8 keys**. Characters are assigned to the keys in order.

- The first 8 characters require **1 push**.
- The next 8 characters require **2 pushes**.
- The next 8 characters require **3 pushes**.
- The remaining characters require **4 pushes**.

Return the minimum number of pushes required to type the word.

---

## Approach

- Traverse each character of the word.
- Determine how many pushes are needed based on its position.
- Add the pushes to the answer.

---

## Algorithm

1. Initialize `ans = 0`.
2. Traverse the string.
3. Add `(i / 8) + 1` to `ans`.
4. Return `ans`.

---

## Example

### Input

```
word = "abcdefgh"
```

### Output

```
8
```

### Input

```
word = "abcdefghijkl"
```

### Output

```
16
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Greedy
- Strings
- Simulation

---

## Tags

<<<<<<< HEAD
`Greedy` `String`
=======
`Greedy` `String`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
