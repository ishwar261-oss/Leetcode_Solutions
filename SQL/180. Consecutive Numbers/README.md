# 180. Consecutive Numbers

## Problem Statement

Table: **Logs**

| Column Name | Type |
|-------------|------|
| id | int |
| num | varchar |

`id` is the primary key.

Write a SQL query to find all numbers that appear **at least three times consecutively**.

Return the result table in any order.

---

## Example

### Input

**Logs**

| id | num |
|----|-----|
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 2 |
| 5 | 1 |
| 6 | 2 |
| 7 | 2 |

### Output

| ConsecutiveNums |
|-----------------|
| 1 |

### Explanation

The number `1` appears three consecutive times (`id = 1, 2, 3`).

---

## Approach

Use **Self Join** to compare three consecutive rows.

- Join the table with itself three times.
- Match consecutive rows using their `id`.
- Check if all three `num` values are equal.
- Use `DISTINCT` to remove duplicate results.

---

## Algorithm

1. Create three aliases of the `Logs` table (`l1`, `l2`, `l3`).
2. Join `l1` with `l2` where `l2.id = l1.id + 1`.
3. Join `l2` with `l3` where `l3.id = l2.id + 1`.
4. Check if all three `num` values are equal.
5. Return distinct numbers.

---

## SQL Solution

```sql
SELECT DISTINCT l1.num AS ConsecutiveNums
FROM Logs l1
JOIN Logs l2
ON l1.id = l2.id - 1
JOIN Logs l3
ON l2.id = l3.id - 1
WHERE l1.num = l2.num
AND l2.num = l3.num;
```

---

## Dry Run

### Logs Table

| id | num |
|----|-----|
| 1 | 1 |
| 2 | 1 |
| 3 | 1 |
| 4 | 2 |
| 5 | 2 |
| 6 | 2 |

### First Comparison

```
id 1 → id 2 → id 3
```

```
1 = 1 = 1
```

✅ Output: `1`

---

### Second Comparison

```
id 2 → id 3 → id 4
```

```
1 = 1 ≠ 2
```

❌ Ignore

---

### Third Comparison

```
id 4 → id 5 → id 6
```

```
2 = 2 = 2
```

✅ Output: `2`

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SQL
- Self Join
- INNER JOIN
- DISTINCT
- Consecutive Records

---

## Tags

<<<<<<< HEAD
`SQL` `Self Join` `JOIN` `Medium`
=======
`SQL` `Self Join` `JOIN` `Medium`
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
