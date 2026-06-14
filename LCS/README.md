# Longest Common Subsequence (LCS)

## Definition
The **Longest Common Subsequence** problem is a classic **dynamic programming** problem. Given two strings, it finds the **longest subsequence** that appears in **both** strings in the same relative order — though not necessarily contiguous. For example, the LCS of `"longest"` and `"stone"` is `"one"`.

A **subsequence** keeps the order of characters but allows skipping some. Unlike a substring, the characters do not need to be next to each other.

## How It Works
1. Build a DP table `dp[i][j]`, representing the LCS length of the first `i` characters of string 1 and the first `j` characters of string 2.
2. For each pair of characters:
   - If they **match**, add 1 to the diagonal value: `dp[i][j] = dp[i-1][j-1] + 1`.
   - If they **don't match**, take the larger of the top or left value: `dp[i][j] = max(dp[i-1][j], dp[i][j-1])`.
3. The LCS length sits at `dp[n][m]`.
4. **Backtrack** through the table to reconstruct the actual subsequence.

## Time Complexity
- **O(n × m)** — where `n` and `m` are the lengths of the two strings.

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter first string: longest
Enter second string: stone
```

The strings can be copied directly:

**String 1:**
```
longest
```

**String 2:**
```
stone
```

## Expected Output
```
Length of LCS = 3
LCS = one
```

> **Note:** The program reads strings using `cin >>`, so input must be a **single word with no spaces**.

---

> **Note:** This README is generated for learning purposes.
