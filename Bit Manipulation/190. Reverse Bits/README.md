<<<<<<< HEAD
=======
<<<<<<< HEAD
# 190. Reverse Bits

## Problem Statement

Reverse the bits of a given 32-bit unsigned integer.

---

## Example

Input

```
00000010100101000001111010011100
```

Output

```
00111001011110000010100101000000
```

---

## Approach

- Extract the last bit using `n & 1`.
- Shift the answer left by one position.
- Add the extracted bit.
- Shift `n` right.
- Repeat 32 times.

---

## Algorithm

1. Initialize `ans = 0`.
2. Repeat 32 times:
   - Extract the last bit.
   - Left shift `ans`.
   - Add the extracted bit.
   - Right shift `n`.
3. Return `ans`.

---

## Complexity

**Time Complexity**

```
O(32)
```

**Space Complexity**

```
O(1)
```

---

## Concepts Used

- Bit Manipulation
- Left Shift
- Right Shift
- AND
- OR

---

## Tags

=======
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
# 190. Reverse Bits

## Problem Statement

Reverse the bits of a given 32-bit unsigned integer.

---

## Example

Input

```
00000010100101000001111010011100
```

Output

```
00111001011110000010100101000000
```

---

## Approach

- Extract the last bit using `n & 1`.
- Shift the answer left by one position.
- Add the extracted bit.
- Shift `n` right.
- Repeat 32 times.

---

## Algorithm

1. Initialize `ans = 0`.
2. Repeat 32 times:
   - Extract the last bit.
   - Left shift `ans`.
   - Add the extracted bit.
   - Right shift `n`.
3. Return `ans`.

---

## Complexity

**Time Complexity**

```
O(32)
```

**Space Complexity**

```
O(1)
```

---

## Concepts Used

- Bit Manipulation
- Left Shift
- Right Shift
- AND
- OR

---

## Tags

<<<<<<< HEAD
`Bit Manipulation`
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`Bit Manipulation`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
