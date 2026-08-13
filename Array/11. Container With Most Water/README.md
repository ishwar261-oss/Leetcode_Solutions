# LeetCode 11 — Container With Most Water

## Problem

You are given an array `height`.

Each element represents the height of a vertical line.

You need to choose **two lines** that can form a container and find the **maximum amount of water** that the container can hold.

The lines cannot be tilted.

---

## Example

```text
Input:
height = [1,8,6,2,5,4,8,3,7]

Output:
49
```

The best two lines have heights:

```text
8 and 7
```

Their distance is:

```text
7
```

The height of the water is limited by the shorter line:

```text
min(8, 7) = 7
```

Therefore:

```text
Area = width × height
     = 7 × 7
     = 49
```

---

## Formula

For two positions `left` and `right`:

```text
Area = (right - left) × min(height[left], height[right])
```

The water level is always determined by the **shorter line**.

---

# Approach 1 — Brute Force

The simplest approach is to try **every possible pair** of lines.

For every pair:

1. Calculate the width.
2. Find the smaller height.
3. Calculate the area.
4. Keep the maximum area.

### Example

```text
height = [1, 8, 6, 2]
```

Try:

```text
1 and 8
1 and 6
1 and 2
8 and 6
8 and 2
6 and 2
```

Calculate the area for every pair and take the largest.

### Complexity

```text
Time:  O(n²)
Space: O(1)
```

This approach is simple but too slow for large input.

---

# Approach 2 — Two Pointers

The better approach is **Two Pointers**.

Start with one pointer at each end:

```text
left = 0
right = n - 1
```

This gives us the **maximum possible width** initially.

Calculate the area:

```text
width = right - left

waterHeight = min(height[left], height[right])

area = width × waterHeight
```

Keep track of the maximum area.

---

## Why Move the Smaller Height?

Suppose:

```text
height[left] < height[right]
```

The water height is limited by:

```text
height[left]
```

If we move `right`:

```text
width decreases
```

but the limiting height `height[left]` remains.

So moving the right pointer cannot give a better result while keeping the same left line.

Instead, we move the shorter line:

```text
left++
```

This gives a chance to find a taller line.

Similarly, if:

```text
height[right] < height[left]
```

move:

```text
right--
```

---

## Algorithm

1. Set `left = 0`.
2. Set `right = n - 1`.
3. Calculate the current area.
4. Update the maximum area.
5. Compare the two heights.
6. If the left height is smaller, move `left`.
7. Otherwise, move `right`.
8. Continue until:
   ```text
   left >= right
   ```
9. Return the maximum area.

---

## Dry Run

Consider:

```text
height = [1,8,6,2,5,4,8,3,7]
```

Start:

```text
left = 0
right = 8
```

Heights:

```text
1 and 7
```

Area:

```text
8 × min(1,7)
= 8
```

Left height is smaller:

```text
left++
```

---

Now:

```text
left = 1
right = 8
```

Heights:

```text
8 and 7
```

Area:

```text
7 × min(8,7)
= 49
```

Current maximum:

```text
49
```

Right height is smaller:

```text
right--
```

Continue this process.

No later pair produces an area greater than `49`.

Therefore:

```text
Answer = 49
```

---

## Key Observation

The area depends on two things:

```text
Width × Shorter Height
```

When we move a pointer inward, the width always decreases.

Therefore, to have a chance of getting a larger area, we must try to increase the **shorter height**.

That gives the main rule:

```text
Move the pointer with the smaller height.
```

---

## Complexity

### Brute Force

```text
Time:  O(n²)
Space: O(1)
```

### Two Pointers

```text
Time:  O(n)
Space: O(1)
```

The two-pointer approach is much faster because each pointer moves only from one end toward the other.

---

## Key Idea

```text
Start from both ends
        ↓
Calculate area
        ↓
Keep maximum
        ↓
Move the shorter line
        ↓
Repeat
```

### Most Important Rule

```text
Smaller height → Move that pointer
```

---

## Concepts Used

- Array
- Two Pointers
- Greedy Approach
- Maximum Area
- Optimization

## Tags

`Array` `Two Pointers` `Greedy` `Medium`