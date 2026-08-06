# Container With Most Water

## Problem Statement

You are given an integer array `height`, where each element represents the height of a vertical line. Find two lines that, together with the x-axis, form a container capable of holding the **maximum amount of water**.

Return the maximum amount of water the container can store.

---

## Example

### Input

```text
height = [1,8,6,2,5,4,8,3,7]
```

### Output

```text
49
```

### Explanation

Choose the lines at indices **1** and **8**.

- Height = `min(8, 7) = 7`
- Width = `8 - 1 = 7`
- Area = `7 × 7 = 49`

Therefore, the maximum amount of water that can be stored is **49**.

---

# Approach (Two Pointers)

The area formed by two lines depends on:

- **Height =** `min(height[left], height[right])`
- **Width =** `right - left`

### Algorithm

1. Initialize two pointers:
   - `left = 0`
   - `right = n - 1`
2. Calculate the current area.
3. Update the maximum area.
4. Move the pointer having the **smaller height**.
5. Repeat until both pointers meet.

---

## Why Move the Smaller Height?

The shorter line determines the container's height.

If we move the taller line, the width decreases while the limiting height remains the same or becomes even smaller, so the area cannot increase.

By moving the shorter line, we may find a taller line that increases the container's height enough to produce a larger area.

---

## Dry Run

### Input

```text
height = [1,8,6,2,5,4,8,3,7]
```

| Left | Right | Height | Width | Area | Maximum |
|------|-------|--------|------:|-----:|--------:|
| 0 | 8 | 1 | 8 | 8 | 8 |
| 1 | 8 | 7 | 7 | 49 | 49 |
| 1 | 7 | 3 | 6 | 18 | 49 |
| 1 | 6 | 8 | 5 | 40 | 49 |
| 2 | 6 | 6 | 4 | 24 | 49 |
| 3 | 6 | 2 | 3 | 6 | 49 |
| 4 | 6 | 5 | 2 | 10 | 49 |
| 5 | 6 | 4 | 1 | 4 | 49 |

Final Answer:

```text
49
```

---

## C++ Solution

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int ans = 0;

        while (left < right) {

            int h = min(height[left], height[right]);
            int w = right - left;

            ans = max(ans, h * w);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return ans;
    }
};
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Insight

The amount of water is determined by the **shorter line** and the **distance** between the two lines.

Using two pointers allows us to efficiently explore all possible containers by always moving the pointer pointing to the shorter line, resulting in a linear-time solution.

---

## Complexity Summary

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Brute Force | `O(n²)` | `O(1)` |
| **Two Pointers** | **`O(n)`** | **`O(1)`** ✅ |

---

### ✅ Optimal Approach

- **Algorithm:** Two Pointers
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
- **Reason:** The two-pointer technique eliminates unnecessary comparisons by moving the pointer with the smaller height, guaranteeing the optimal solution in a single traversal.
