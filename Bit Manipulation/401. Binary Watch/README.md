# 401. Binary Watch

## Problem

A binary watch has LEDs to represent hours and minutes.

Given the number of LEDs that are turned on, return all possible valid times.

---

## Approach

- Try every possible hour (`0–11`) and minute (`0–59`).
- Count the number of set bits (1s) in both values.
- If the total equals `turnedOn`, the time is valid.
- Store all valid times in the answer.

---

## Algorithm

1. Iterate through all hours.
2. Iterate through all minutes.
3. Count the set bits using `__builtin_popcount()`.
4. If the total equals `turnedOn`, add the formatted time.

---

## Complexity

- **Time Complexity:** `O(12 × 60)` ≈ `O(1)`
- **Space Complexity:** `O(1)` (excluding the output list)

---

## Concepts Used

- Bit Manipulation
- Enumeration
- String Formatting

---

## Tags

`Bit Manipulation` `Backtracking` `Enumeration`
