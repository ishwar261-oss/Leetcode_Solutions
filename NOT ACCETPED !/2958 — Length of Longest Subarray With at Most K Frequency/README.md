# LeetCode 2958 — Length of Longest Subarray With at Most K Frequency

## Problem

Given an array `nums` and an integer `k`, find the length of the **longest subarray** where every element appears **at most `k` times**.

A subarray must contain continuous elements.

## Example

```text
nums = [1, 2, 2, 1, 3]
k = 1
```

A valid longest subarray is:

```text
[2, 1, 3]
```

Each number appears at most once.

So the answer is:

```text
3
```

## Approach

Use **Sliding Window + Frequency Array**.

We maintain a window using two pointers:

```text
left ........ right
```

The `right` pointer expands the window.

For every element we add:

```text
freq[nums[right]]++
```

If an element appears more than `k` times, the window becomes invalid.

We then move `left` forward and remove elements from the frequency array until the window becomes valid again.

## Why Frequency Array?

Instead of using:

```text
map
unordered_map
set
```

we use an array to store frequencies.

For example:

```text
nums = [1, 2, 2, 3]
```

The frequency array contains:

```text
freq[1] = 1
freq[2] = 2
freq[3] = 1
```

This gives direct access to the frequency of each value.

## Algorithm

1. Create a frequency array initialized with `0`.
2. Set `left = 0`.
3. Move `right` through the array.
4. Increase the frequency of `nums[right]`.
5. If the frequency becomes greater than `k`:
   - Decrease the frequency of `nums[left]`.
   - Move `left` forward.
6. Continue until the current window is valid.
7. Calculate the window length:
   ```text
   right - left + 1
   ```
8. Keep the maximum length.
9. Return the maximum length.

## Dry Run

```text
nums = [1, 2, 2, 1, 3]
k = 1
```

Start:

```text
[1]
```

Valid.

Add `2`:

```text
[1, 2]
```

Valid.

Add another `2`:

```text
[1, 2, 2]
```

Frequency of `2` is:

```text
2
```

But:

```text
k = 1
```

So the window is invalid.

Move `left`:

```text
[2, 2]
```

Still invalid because `2` appears twice.

Move `left` again:

```text
[2]
```

Now the window is valid.

Continue expanding and keep checking the maximum length.

The answer is:

```text
3
```

## Key Idea

```text
Expand window
      ↓
Frequency > K
      ↓
Move left
      ↓
Decrease frequency
      ↓
Window becomes valid
      ↓
Update maximum length
```

The important condition is:

```text
frequency of every element <= k
```

## Complexity

### Time Complexity

```text
O(n)
```

Each element enters and leaves the sliding window at most once.

### Space Complexity

```text
O(M)
```

where `M` is the maximum value that the frequency array needs to store.

## Concepts Used

- Array
- Sliding Window
- Two Pointers
- Frequency Array
- Frequency Counting

## Important Note

This approach avoids:

```text
map
unordered_map
set
unordered_set
```

and uses a simple frequency array instead.

## Tags

`Array` `Sliding Window` `Two Pointers` `Frequency Array`