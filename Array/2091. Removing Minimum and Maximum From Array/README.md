# 2091. Removing Minimum and Maximum From Array

## Approach

Find the indices of the minimum and maximum elements in the array.

```cpp
int minIndex = min_element(nums.begin(), nums.end()) - nums.begin();
int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
```

If the minimum element comes after the maximum element, swap their indices so that:

```text
minIndex < maxIndex
```

```cpp
if (minIndex > maxIndex)
    swap(minIndex, maxIndex);
```

Then consider three possible ways to remove both elements.

### 1. Remove Both From Front

Remove elements from the beginning until the farther element is removed.

```cpp
front = maxIndex + 1;
```

### 2. Remove Both From Back

Remove elements from the end until the farther element is removed.

```cpp
back = n - minIndex;
```

### 3. Remove One From Each Side

Remove the minimum element from the front and the maximum element from the back.

```cpp
both = (minIndex + 1) + (n - maxIndex);
```

The answer is the minimum of these three values.

```cpp
return min({front, back, both});
```

## Example

```text
nums = [2, 10, 7, 5, 4, 1, 8, 6]

minIndex = 5
maxIndex = 1
```

Swap them:

```text
minIndex = 1
maxIndex = 5
```

Now calculate:

```text
front = maxIndex + 1
      = 5 + 1
      = 6

back = n - minIndex
     = 8 - 1
     = 7

both = (minIndex + 1) + (n - maxIndex)
     = (1 + 1) + (8 - 5)
     = 2 + 3
     = 5
```

Therefore:

```text
answer = min(6, 7, 5)
       = 5
```

## Algorithm

```text
1. Find the index of the minimum element.
2. Find the index of the maximum element.
3. If minIndex > maxIndex, swap them.
4. Calculate:
   
   front = maxIndex + 1
   back = n - minIndex
   both = minIndex + 1 + n - maxIndex

5. Return the minimum of front, back and both.
```

## Key Idea

There are only three possible ways:

```text
Both from front
       OR
Both from back
       OR
One from front + one from back
```

Choose the strategy requiring the fewest deletions.

## Complexity

### Time Complexity

```text
O(n)
```

`min_element()` and `max_element()` each take linear time.

### Space Complexity

```text
O(1)
```

Only a few variables are used.

## Concepts Used

* Arrays
* `min_element()`
* `max_element()`
* `swap()`
* Indexing
* Greedy
* Case Analysis
* STL
