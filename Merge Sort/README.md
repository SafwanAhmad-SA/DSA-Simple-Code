# Merge Sort

## Definition
Merge Sort is a **divide-and-conquer** sorting algorithm. It works by repeatedly **splitting** the array into two halves until each piece has a single element, then **merging** those pieces back together in sorted order. It is a **stable** sort and guarantees consistent performance regardless of the input arrangement.

## How It Works
1. **Divide:** Split the array into two halves at the middle.
2. **Conquer:** Recursively apply merge sort to each half until sub-arrays have one element (already sorted).
3. **Merge:** Combine the two sorted halves into a single sorted array by comparing elements one by one.
4. Repeat until the full array is merged back together in sorted order.

## Time Complexity
- **Best / Average / Worst case:** O(n log n) — performance stays consistent across all inputs.
- **Space Complexity:** O(n) — requires extra space for the temporary halves during merging.

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter array size: 6
Enter elements:
```

Then enter the array elements (this part can be copied directly):

```
9 3 7 1 8 2
```

## Expected Output
```
Sorted array: 1 2 3 7 8 9
```

---

> **Note:** This README is generated for learning purposes.
