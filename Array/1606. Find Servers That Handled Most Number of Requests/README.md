# 1606. Find Servers That Handled Most Number of Requests

**Platform:** LeetCode  
**Difficulty:** Hard  
**Topics:** Ordered Set, Priority Queue, Greedy, Simulation

## Problem Description

There are `k` servers numbered from `0` to `k-1`. Each incoming request has an arrival time and a processing time.

A request is assigned to the first available server starting from `i % k`. If that server is unavailable, the next available server is selected in circular order.

If all servers are busy, the request is dropped.

Return the indices of the servers that handled the maximum number of requests.

## Approach: Ordered Set + Min Heap

1. Initialize a `set` containing all available server indices.
2. Use a **Min Heap** to track busy servers based on their finishing times.
3. Before processing each request, release all servers whose tasks have finished.
4. Calculate the preferred server using `i % k`.
5. Use `lower_bound()` to find the next available server.
6. If no server is found, wrap around to the first available server.
7. Assign the request and increment that server's request count.
8. Finally, find the maximum request count and return all servers having that count.

## C++ Concepts Used

- `set<int>` – Maintains available servers in sorted order.
- `priority_queue` – Tracks busy servers and their finishing times.
- `greater<>` – Converts the priority queue into a min heap.
- `lower_bound()` – Finds the next available server.
- `i % k` – Determines the preferred server using circular allocation.

## Complexity Analysis

Let `n` be the number of requests and `k` be the number of servers.

- **Time Complexity:** `O(n log k)` – Each request involves set and heap operations.
- **Space Complexity:** `O(k)` – Stores available servers, busy servers, and request counts.

## Key Learning

The combination of an ordered set and a min heap efficiently handles server availability and request scheduling.

The most important optimization is using `lower_bound()` to find the next available server instead of checking every server sequentially.

## Conclusion

This problem demonstrates how ordered sets and priority queues can be combined to efficiently simulate scheduling systems with circular allocation.