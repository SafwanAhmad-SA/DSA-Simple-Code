# 🌳 Minimum Spanning Tree (MST) using Kruskal's Algorithm

A simple C++ implementation of **Kruskal's Algorithm** to find the **Minimum Spanning Tree (MST)** of a weighted undirected graph.

---

## 📌 Overview

Kruskal's Algorithm is a greedy algorithm that constructs a Minimum Spanning Tree by repeatedly selecting the edge with the smallest weight that does not form a cycle.

This implementation:

* Sorts all edges in ascending order of weight
* Uses a simple Union-Find (Disjoint Set) structure
* Generates the Minimum Spanning Tree
* Calculates the total weight of the MST

---

## 📂 Files

| File                 | Description                |
| -------------------- | -------------------------- |
| `MSTwithKruskal.cpp` | Source code implementation |
| `README.md`          | Project documentation      |

---

## 🧠 Algorithm Steps

1. Sort all edges by increasing weight.
2. Pick the smallest edge.
3. Check whether adding it creates a cycle.
4. If no cycle is formed, include it in the MST.
5. Repeat until `V - 1` edges have been selected.

---

## ⏱️ Time Complexity

| Operation     | Complexity |
| ------------- | ---------- |
| Sorting Edges | O(E²)      |
| Finding MST   | O(E × V)   |
| Overall       | O(E²)      |

---

## 📥 Input Format

The program expects the following input:

```text
Number of Vertices
Number of Edges

u v weight
u v weight
u v weight
...
```

Where:

* `u` = Source Vertex
* `v` = Destination Vertex
* `weight` = Edge Weight

---


## 🖼️ Sample Graph

Graph used in this example:

```
      <img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/75794e00-2b1a-4bf5-9e20-41ef1c03d22d" />
```

---

## 📋 Sample Input

Copy and paste directly into the program:

```text
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ▶️ Program Interaction

```text
Enter number of vertices: 9
Enter number of edges: 14
Enter edges (u v weight):

0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ✅ Expected Output

```text
Edges in Minimum Spanning Tree:

6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9

Total Weight of MST: 37
```

---

## 🌲 Minimum Spanning Tree

Selected edges:

```text
6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9
```

Total MST Weight:

```text
37
```

---

## 🛠️ Compile and Run

### Linux / macOS

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal
./MSTwithKruskal
```

### Windows

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal.exe
MSTwithKruskal.exe
```

---

## 📚 Concepts Used

* Graph Theory
* Minimum Spanning Tree (MST)
* Greedy Algorithms
* Kruskal's Algorithm
* Disjoint Set Union (Union-Find)

---

## 👨‍💻 Author

Developed as part of Data Structures and Algorithms (DSA) practice and learning.

```

---

## 📋 Sample Input

Copy and paste directly into the program:

```text
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ▶️ Program Interaction

```text
Enter number of vertices: 9
Enter number of edges: 14
Enter edges (u v weight):

0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ✅ Expected Output

```text
Edges in Minimum Spanning Tree:

6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9

Total Weight of MST: 37
```

---

## 🌲 Minimum Spanning Tree

Selected edges:

```text
6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9
```

Total MST Weight:

```text
37
```

---

## 🛠️ Compile and Run

### Linux / macOS

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal
./MSTwithKruskal
```

### Windows

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal.exe
MSTwithKruskal.exe
```

---

## 📚 Concepts Used

* Graph Theory
* Minimum Spanning Tree (MST)
* Greedy Algorithms
* Kruskal's Algorithm
* Disjoint Set Union (Union-Find)

---

## 👨‍💻 Author

Developed as part of Data Structures and Algorithms (DSA) practice and learning.

```

---

## 📋 Sample Input

Copy and paste directly into the program:

```text
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ▶️ Program Interaction

```text
Enter number of vertices: 9
Enter number of edges: 14
Enter edges (u v weight):

0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
```

---

## ✅ Expected Output

```text
Edges in Minimum Spanning Tree:

6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9

Total Weight of MST: 37
```

---

## 🌲 Minimum Spanning Tree

Selected edges:

```text
6 - 7 : 1
2 - 8 : 2
5 - 6 : 2
0 - 1 : 4
2 - 5 : 4
2 - 3 : 7
0 - 7 : 8
3 - 4 : 9
```

Total MST Weight:

```text
37
```

---

## 🛠️ Compile and Run

### Linux / macOS

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal
./MSTwithKruskal
```

### Windows

```bash
g++ MSTwithKruskal.cpp -o MSTwithKruskal.exe
MSTwithKruskal.exe
```

---

## 📚 Concepts Used

* Graph Theory
* Minimum Spanning Tree (MST)
* Greedy Algorithms
* Kruskal's Algorithm
* Disjoint Set Union (Union-Find)

---

## 👨‍💻 Author

Developed as part of Data Structures and Algorithms (DSA) practice and learning.

