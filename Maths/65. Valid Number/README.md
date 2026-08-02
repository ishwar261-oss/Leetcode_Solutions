# 65. Valid Number

## Problem Statement

Determine whether a given string represents a valid decimal number.

A valid number may contain:

- Digits (`0-9`)
- An optional sign (`+` or `-`)
- A decimal point (`.`)
- An exponent (`e` or `E`)

Return `true` if the string is a valid number; otherwise return `false`.

---

## Approach

Traverse the string while tracking:

- Whether a digit has been seen.
- Whether a decimal point has appeared.
- Whether an exponent has appeared.

Rules:

- A sign is allowed only at the beginning or immediately after an exponent.
- A decimal point can appear only once and before an exponent.
- An exponent can appear only once and only after at least one digit.
- There must be at least one digit after an exponent.

---

## Algorithm

1. Remove leading spaces.
2. Process an optional sign.
3. Traverse the string:
   - Digits are always valid.
   - Allow one decimal point before an exponent.
   - Allow one exponent after digits.
   - Allow an optional sign immediately after the exponent.
4. Skip trailing spaces.
5. Return whether the string ends in a valid state.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- String Parsing
- Finite State Machine (FSM)
- Simulation

---

## Tags

`String` `Parsing` `Hard` `Simulation`
