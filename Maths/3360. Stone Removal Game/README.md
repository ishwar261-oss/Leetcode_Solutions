# 3360. Stone Removal Game

**Difficulty:** Easy

## Problem Statement

Alice and Bob play a game starting with `n` stones.

- Alice removes 10 stones in her first turn.
- Bob removes 9 stones in his first turn.
- In every next turn, the number of stones to remove decreases by 1.
- A player who cannot remove the required number of stones loses the game.

Return `true` if Alice wins, otherwise return `false`.

## Approach

**Simulation**

- Start with 10 stones to be removed.
- Use a loop to simulate each player's turn.
- If enough stones are available, subtract the required stones.
- Decrease the required stones by 1 after every successful turn.
- Count the total number of successful turns.
- If the turn count is odd, Alice wins; otherwise, Bob wins.

## Complexity Analysis

- **Time Complexity:** O(1), because at most 10 turns can occur.
- **Space Complexity:** O(1), because only a few variables are used.

## Key Concepts

- Simulation
- Loops
- Basic Mathematics