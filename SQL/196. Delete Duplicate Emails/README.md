# 196. Delete Duplicate Emails

## Problem Statement

The `Person` table contains duplicate email addresses.

Delete all duplicate rows, keeping **only the row with the smallest `id`** for each email.

Return the remaining records.

---

## Approach

Use a **SELF JOIN** on the `Person` table.

- Compare rows having the same email.
- If two rows have the same email:
  - Keep the row with the smaller `id`.
  - Delete the row with the larger `id`.

The condition `p1.id > p2.id` ensures that only duplicate rows with larger IDs are removed.

---

## Algorithm

1. Join the `Person` table with itself.
2. Match rows having the same email.
3. If one row has a larger `id`, delete it.
4. The row with the smallest `id` remains.

---

## Example

### Before

| id | email |
|----|------------------|
| 1 | a@b.com |
| 2 | c@d.com |
| 3 | a@b.com |

### Duplicate Found

```
Email: a@b.com

Keep : id = 1
Delete : id = 3
```

### After

| id | email |
|----|------------------|
| 1 | a@b.com |
| 2 | c@d.com |

---

## Complexity Analysis

- **Time Complexity:** `O(n²)` (worst case without indexes)
- **Space Complexity:** `O(1)`

---

## Concepts Used

- DELETE
- SELF JOIN
- Duplicate Removal

---

## Tags

# 196. Delete Duplicate Emails

## Problem Statement

The `Person` table contains duplicate email addresses.

Delete all duplicate rows, keeping **only the row with the smallest `id`** for each email.

Return the remaining records.

---

## Approach

Use a **SELF JOIN** on the `Person` table.

- Compare rows having the same email.
- If two rows have the same email:
  - Keep the row with the smaller `id`.
  - Delete the row with the larger `id`.

The condition `p1.id > p2.id` ensures that only duplicate rows with larger IDs are removed.

---

## Algorithm

1. Join the `Person` table with itself.
2. Match rows having the same email.
3. If one row has a larger `id`, delete it.
4. The row with the smallest `id` remains.

---

## Example

### Before

| id | email |
|----|------------------|
| 1 | a@b.com |
| 2 | c@d.com |
| 3 | a@b.com |

### Duplicate Found

```
Email: a@b.com

Keep : id = 1
Delete : id = 3
```

### After

| id | email |
|----|------------------|
| 1 | a@b.com |
| 2 | c@d.com |

---

## Complexity Analysis

- **Time Complexity:** `O(n²)` (worst case without indexes)
- **Space Complexity:** `O(1)`

---

## Concepts Used

- DELETE
- SELF JOIN
- Duplicate Removal

---

## Tags

`SQL` `Easy` `DELETE` `SELF JOIN`
`SQL` `Easy` `DELETE` `SELF JOIN`
