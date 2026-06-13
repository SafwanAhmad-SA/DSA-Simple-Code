# Kruskal's Algorithm

## Definition
Kruskal's Algorithm is a **greedy algorithm** used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph. An MST is a subset of edges that connects all vertices together with the **minimum possible total edge weight** and without forming any cycle.

## How It Works
1. Sort all edges in increasing order of their weight.
2. Pick the smallest edge. If it does not form a cycle with the already selected edges, include it in the MST.
3. If it forms a cycle, discard it.
4. Repeat until the MST contains exactly **(V − 1)** edges.

Cycle detection is handled using a **Disjoint Set (Union–Find)** structure via the `findParent()` function.

## Time Complexity
- Sorting edges: **O(E log E)**
- Overall: **O(E log E)** (or O(E²) here, since this code uses simple bubble sort)

## Sample Graph
The graph below has **6 vertices** and **7 edges**:

```
        1            4
   (1)------(2)------(3)
    |        |        /
  3 |      2 |     5 /
    |        |      /
   (4)------(5)----(6)
        6        6
```

| Edge  | Weight |
|-------|--------|
| 1 – 2 | 1      |
| 2 – 3 | 4      |
| 1 – 4 | 3      |
| 2 – 5 | 2      |
| 3 – 5 | 5      |
| 4 – 5 | 6      |
| 5 – 6 | 6      |

## How to Run
Compile and run the program, then enter the input as shown below.

## Sample Input
Enter the values in this order: **vertices**, **edges**, then each edge as `u v weight`.

```
6
7
1 2 1
2 3 4
1 4 3
2 5 2
3 5 5
4 5 6
5 6 6
```

## Expected Output
```
Edges in Minimum Spanning Tree:
1 - 2 : 1
2 - 5 : 2
1 - 4 : 3
2 - 3 : 4
5 - 6 : 6

Total Weight of MST: 16
```

The resulting MST is shown on the right side of the sample graph.
