# 151. Reverse Words in a String

## Problem

Given an input string `s`, reverse the order of the words.

A word is defined as a sequence of non-space characters.

The returned string should contain only a single space between words and no leading or trailing spaces.

---

## Approach

- Remove leading and trailing spaces using `trim()`.
- Split the string using the regular expression `\\s+` to handle multiple spaces.
- Traverse the array in reverse order.
- Build the answer using a `StringBuilder`.

---

## Algorithm

1. Trim the input string.
2. Split it into words using `split("\\\\s+")`.
3. Traverse the array from end to beginning.
4. Append each word to the result.
5. Add a space only between words.
6. Return the final string.

---

## Time Complexity

**O(n)**

where **n** is the length of the string.

---

## Space Complexity

**O(n)**

for storing the split words and the resulting string.

---

## Topics

- String
- Two Pointers
- StringBuilder