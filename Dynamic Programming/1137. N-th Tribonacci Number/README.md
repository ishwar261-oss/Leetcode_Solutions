<<<<<<< HEAD
# 1137. N-th Tribonacci Number

## Problem
The Tribonacci sequence is defined as:

- T0 = 0
- T1 = 1
- T2 = 1

For n ≥ 3:

Tn = T(n-1) + T(n-2) + T(n-3)

Return the value of Tn.

---

## Approach

- Handle the first three base cases.
- Store the previous three Tribonacci numbers.
- Iterate from 3 to n.
- Calculate the current Tribonacci number.
- Shift the previous values forward.

This avoids recursion and uses constant extra space.

---

## Algorithm

1. If `n == 0`, return 0.
2. If `n == 1` or `n == 2`, return 1.
3. Initialize:
   - first = 0
   - second = 1
   - third = 1
4. Loop from 3 to n:
   - current = first + second + third
   - Update first, second, and third.
5. Return third.

---

## Time Complexity

**O(n)**

---

## Space Complexity

**O(1)**

---

## Topics

- Dynamic Programming
- Iteration
=======
# 1137. N-th Tribonacci Number

## Problem
The Tribonacci sequence is defined as:

- T0 = 0
- T1 = 1
- T2 = 1

For n ≥ 3:

Tn = T(n-1) + T(n-2) + T(n-3)

Return the value of Tn.

---

## Approach

- Handle the first three base cases.
- Store the previous three Tribonacci numbers.
- Iterate from 3 to n.
- Calculate the current Tribonacci number.
- Shift the previous values forward.

This avoids recursion and uses constant extra space.

---

## Algorithm

1. If `n == 0`, return 0.
2. If `n == 1` or `n == 2`, return 1.
3. Initialize:
   - first = 0
   - second = 1
   - third = 1
4. Loop from 3 to n:
   - current = first + second + third
   - Update first, second, and third.
5. Return third.

---

## Time Complexity

**O(n)**

---

## Space Complexity

**O(1)**

---

## Topics

- Dynamic Programming
- Iteration
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
- Math