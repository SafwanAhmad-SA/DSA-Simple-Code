# Quick Sort

## Definition
Quick Sort is an efficient **divide-and-conquer** sorting algorithm. It works by selecting a **pivot** element and **partitioning** the array so that elements smaller than the pivot go to its left and larger elements go to its right. The sub-arrays on either side are then sorted recursively. This implementation uses the **first element** as the pivot.

## How It Works
1. Pick a **pivot** (here, the first element of the array/sub-array).
2. **Partition** the array using two pointers: one moves forward past elements smaller than or equal to the pivot, the other moves backward past elements larger than the pivot. They swap when out of place.
3. Place the pivot in its correct sorted position, then recursively sort the left and right sub-arrays.
4. The recursion stops when sub-arrays have one or zero elements (already sorted).

## Time Complexity
- **Best / Average case:** O(n log n)
- **Worst case:** O(n²) — occurs when the pivot is always the smallest or largest element (e.g., already sorted data).

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter number of elements: 6
Enter elements:
```

Then enter the array elements (this part can be copied directly):

```
9 3 7 1 8 2
```

## Expected Output
```
Sorted Array: 1 2 3 7 8 9
```

---

> **Note:** This README is generated for learning purposes.
