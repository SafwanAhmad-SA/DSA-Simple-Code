# Prim's Algorithm

## Definition
Prim's Algorithm is a **greedy algorithm** used to find the **Minimum Spanning Tree (MST)** of a connected, weighted, undirected graph. An MST connects all vertices together with the **minimum possible total edge weight** and without forming any cycle. Unlike Kruskal's (which works edge by edge), Prim's grows the MST **one vertex at a time**, starting from a source vertex.

## How It Works
1. Start from any vertex (here, vertex 0) and mark it as selected.
2. Find the minimum-weight edge that connects a selected vertex to an unselected vertex.
3. Add that edge and the new vertex to the MST.
4. Repeat until all vertices are included (the MST has **V − 1** edges).

## Time Complexity
- Using an adjacency matrix: **O(V²)**

## Sample Graph

<img width="967" height="332" alt="image" src="https://github.com/user-attachments/assets/d69500e1-c421-41f6-b0b5-5b649bb93e5f" />


The graph above has **6 vertices** and **7 edges**. The left side shows the original graph, and the right side shows the resulting Minimum Spanning Tree.

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
Compile and run the program, then enter the input as prompted:

```
Enter number of vertices: 6
Enter adjacency matrix (0 for no edge):
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
Edges in Minimum Spanning Tree:
0 - 1 : 1
1 - 4 : 2
0 - 3 : 3
1 - 2 : 4
4 - 5 : 6

Total Weight of MST: 16
```

> **Note:** The program uses **0-based indexing**, so vertex 1 in the graph is shown as `0`, vertex 2 as `1`, and so on.

---

> **Note:** This README is generated for learning purposes.
