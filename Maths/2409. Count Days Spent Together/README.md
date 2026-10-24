# 2409. Count Days Spent Together

## Problem
Given the arrival and departure dates of Alice and Bob in the same year, count the number of days they spend together.

Dates are provided in `MM-DD` format, and both arrival and departure days are included.

## Approach
Convert each date into its day number within the year.

- The common starting day is the later of the two arrival dates.
- The common ending day is the earlier of the two departure dates.
- If the ending day is before the starting day, they spend zero days together.

Otherwise, calculate the inclusive overlap.

## Example
**Input:**
- Alice: `08-15` to `08-18`
- Bob: `08-16` to `08-19`

**Output:** `3`

**Explanation:** They spend August 16, 17, and 18 together.

## Algorithm
1. Store the number of days in each month.
2. Convert each date into its day number in the year.
3. Find the maximum arrival day.
4. Find the minimum departure day.
5. Return `max(0, end - start + 1)`.

## Key Idea
The overlap between two date intervals is determined by the later start date and the earlier end date.

## Complexity
- **Time:** O(1), because the number of months is fixed.
- **Auxiliary Space:** O(1).

## Concepts Used
- Strings
- Arrays
- Date conversion
- `max()` and `min()`
- Interval intersection