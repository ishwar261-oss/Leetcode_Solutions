# 242. Valid Anagram

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, otherwise return `false`.

An **Anagram** is a word formed by rearranging the letters of another word using all the original characters exactly once.

---

## Example

### Input

```
s = "anagram"
t = "nagaram"
```

### Output

```
true
```

---

### Input

```
s = "rat"
t = "car"
```

### Output

```
false
```

---

## Approach

1. If the lengths are different, they cannot be anagrams.
2. Create a frequency array of size 26.
3. Count every character in the first string.
4. Decrease the count for every character in the second string.
5. If every frequency becomes zero, both strings contain the same characters.

---

## Algorithm

1. Check string lengths.
2. Create an integer array of size 26 initialized to 0.
3. Traverse the first string and increase the corresponding frequency.
4. Traverse the second string and decrease the corresponding frequency.
5. Check every frequency value.
6. If any value is not zero, return `false`.
7. Otherwise return `true`.

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- Strings
- Frequency Array
- Character Counting

---

## Tags

`String` `Hashing` `Frequency Array`