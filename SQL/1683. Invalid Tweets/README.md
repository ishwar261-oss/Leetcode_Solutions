# 1683. Invalid Tweets

## Problem Statement

Write a SQL query to find the IDs of tweets that are **invalid**.

A tweet is considered invalid if its content contains **more than 15 characters**.

Return the result table in any order.

---

## Approach

Use the `LENGTH()` function to determine the number of characters in each tweet.

Filter the rows where the content length is greater than `15`.


## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Concepts Used

- SELECT
- WHERE
- LENGTH()

---

## Tags

`SQL` `Easy` `String Functions`
