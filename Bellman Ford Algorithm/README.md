# Bellman-Ford Algorithm

## Definition
Bellman-Ford is a **single-source shortest path algorithm** that finds the shortest distance from a source vertex to all other vertices in a **weighted directed graph**. Unlike Dijkstra's algorithm, Bellman-Ford can handle **negative edge weights** and can also **detect negative weight cycles**.

## How It Works
1. Initialize the distance to the source as `0` and all other distances as infinity (`9999`).
2. Relax all edges **V − 1** times. Relaxing an edge `(u, v, w)` means: if `dist[u] + w < dist[v]`, update `dist[v]`.
3. After V − 1 passes, run one final check over all edges. If any distance can still be reduced, the graph contains a **negative weight cycle**.

## Time Complexity
- **O(V × E)** — every edge is relaxed across V − 1 passes.

## Sample Graph

![Sample Graph](image-name-here.png)

The graph above is a **directed weighted graph**. Each edge points from `u` to `v` with the given weight.

| Edge (u → v) | Weight |
|--------------|--------|
| 0 → 1 | 1 |
| 0 → 3 | 3 |
| 1 → 2 | 4 |
| 1 → 4 | 2 |
| 2 → 4 | 5 |
| 3 → 4 | 6 |
| 4 → 5 | 6 |

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter number of vertices: 6
Enter number of edges: 7
Enter edges (u v weight):
```

Then paste the edge list below (this part can be copied directly):

```
0 1 1
0 3 3
1 2 4
1 4 2
2 4 5
3 4 6
4 5 6
```

## Expected Output
```
Shortest distances from source vertex 0:
0 -> 0 = 0
0 -> 1 = 1
0 -> 2 = 5
0 -> 3 = 3
0 -> 4 = 3
0 -> 5 = 9
```

> **Note:** The program uses **0-based indexing** and treats edges as **directed** (`u → v` only).

---

> **Note:** This README is generated for learning purposes.
