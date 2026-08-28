# 443. String Compression

## Problem

Given an array of characters, compress it in-place.

For consecutive repeating characters:

- Write the character once.
- If it appears more than once, write its count after the character.
- Return the length of the compressed array.

## Example

```text
Input:
["a","a","b","b","c","c","c"]

Output:
5

Compressed Array:
["a","2","b","2","c","3"]