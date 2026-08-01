<<<<<<< HEAD
# 1148. Article Views I

## Problem Statement

Write a SQL query to find the IDs of authors who viewed at least one of their own articles.

Return the result table sorted in ascending order by `id`.

---

## Approach

Compare the `author_id` and `viewer_id`.

If both are equal, it means the author viewed their own article.

Use `DISTINCT` to avoid duplicate IDs and `ORDER BY` to sort the result.

---

## SQL Solution

```sql
SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY id;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- DISTINCT
- WHERE
- ORDER BY
- Column Alias (`AS`)

---

## Tags

=======
# 1148. Article Views I

## Problem Statement

Write a SQL query to find the IDs of authors who viewed at least one of their own articles.

Return the result table sorted in ascending order by `id`.

---

## Approach

Compare the `author_id` and `viewer_id`.

If both are equal, it means the author viewed their own article.

Use `DISTINCT` to avoid duplicate IDs and `ORDER BY` to sort the result.

---

## SQL Solution

```sql
SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY id;
```

---

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- DISTINCT
- WHERE
- ORDER BY
- Column Alias (`AS`)

---

## Tags

>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
`SQL` `Easy` `Filtering` `DISTINCT`