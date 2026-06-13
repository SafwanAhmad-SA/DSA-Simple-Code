# 0/1 Knapsack

## Definition
The **0/1 Knapsack** problem is a classic **dynamic programming** problem. Given a set of items, each with a **weight** and a **value**, the goal is to select items to put into a bag of fixed **capacity** so that the **total value is maximized** — without exceeding the weight limit. Each item can either be taken (1) or left (0); it cannot be broken into fractions.

## How It Works
1. Build a DP table `dp[i][w]`, where `i` is the number of items considered and `w` is the current capacity.
2. For each item, decide between two choices:
   - **Take** the item: its value plus the best value for the remaining capacity.
   - **Skip** the item: the best value without it.
   - Store the larger of the two.
3. The answer (maximum value) sits at `dp[n][W]`.
4. **Backtrack** through the table to find which items were actually selected.

## Time Complexity
- **O(n × W)** — where `n` is the number of items and `W` is the bag capacity.

## Sample Items
A set of **4 items** with the following weights and values, and a bag capacity of **5**:

| Item | Weight | Value |
|------|--------|-------|
| 1 | 2 | 3 |
| 2 | 3 | 4 |
| 3 | 4 | 5 |
| 4 | 5 | 6 |

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter number of elements: 4
Enter weight of the elements:
Enter value (benefit) of the elements:
Enter maximum capacity of the bag: 5
```

Then enter the weights, values, and capacity. The weights and values can be copied directly:

**Weights:**
```
2 3 4 5
```

**Values:**
```
3 4 5 6
```

**Capacity:** `5`

## Expected Output
```
Maximum value I can gain = 7

Selected items:
1 1 0 0
```

> **Note:** In the **Selected items** output, `1` means the item was chosen and `0` means it was skipped. Here, items 1 and 2 are selected (total weight 5, total value 7).

---

> **Note:** This README is generated for learning purposes.
