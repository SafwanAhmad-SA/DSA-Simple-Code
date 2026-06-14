# Dijkstra's Algorithm

## Definition
Dijkstra's Algorithm is a **single-source shortest path algorithm** that finds the shortest distance from a source vertex to all other vertices in a **weighted graph with non-negative edge weights**. It uses a **greedy approach**: at each step it picks the nearest unvisited vertex and updates the distances of its neighbors.

> **Note:** Dijkstra's algorithm does **not** work correctly with negative edge weights. For graphs with negative weights, use Bellman-Ford instead.

## How It Works
1. Initialize the distance to the source as `0` and all other distances as infinity (`9999`).
2. From all **unvisited** vertices, pick the one with the **smallest distance** and mark it visited.
3. **Relax** its neighbors: if going through this vertex gives a shorter path, update the neighbor's distance.
4. Repeat until all vertices are visited.

## Time Complexity
- Using an adjacency matrix: **O(V²)**

## Sample Graph

![Sample Graph](image-name-here.png)

The graph above is a **weighted graph** with **6 vertices**. Row/column `i` of the adjacency matrix represents vertex `i`, and `0` means no edge.

| Edge | Weight |
|------|--------|
| 0 – 1 | 1 |
| 0 – 3 | 3 |
| 1 – 2 | 4 |
| 1 – 4 | 2 |
| 2 – 4 | 5 |
| 3 – 4 | 6 |
| 4 – 5 | 6 |

## How to Run
Compile and run the program, then enter the input as prompted:

```
Enter number of vertices: 6
Enter adjacency matrix:
```

Then paste the adjacency matrix below (this part can be copied directly):

```
0 1 0 3 0 0
1 0 4 0 2 0
0 4 0 0 5 0
3 0 0 0 6 0
0 2 5 6 0 6
0 0 0 0 6 0
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

> **Note:** The program uses **0-based indexing**, so vertex 1 in the graph is shown as `0`, vertex 2 as `1`, and so on. The adjacency matrix is symmetric for an undirected graph.

---

> **Note:** This README is generated for learning purposes.
