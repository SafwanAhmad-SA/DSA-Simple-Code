#include <iostream>
using namespace std;

// Edge class
class Edge {
public:
    int u, v, w;
};

int parent[100];

// Find parent
int find(int x) {
    while (parent[x] != x)
        x = parent[x];

    return x;
}

int main() {
    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    Edge edge[100];

    // Input edges
    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edge[i].u >> edge[i].v >> edge[i].w;
    }

    // Initialize parent array
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    // Sort edges by weight
    for (int i = 0; i < E - 1; i++) {
        for (int j = i + 1; j < E; j++) {
            if (edge[i].w > edge[j].w) {
                Edge temp = edge[i];
                edge[i] = edge[j];
                edge[j] = temp;
            }
        }
    }

    int totalWeight = 0;
    int count = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    // Kruskal's Algorithm
    for (int i = 0; i < E; i++) {

        int uParent = find(edge[i].u);
        int vParent = find(edge[i].v);

        // If no cycle is formed
        if (uParent != vParent) {

            cout << edge[i].u << " - "
                 << edge[i].v << " : "
                 << edge[i].w << endl;

            totalWeight += edge[i].w;

            // Union
            parent[uParent] = vParent;

            count++;

            if (count == V - 1)
                break;
        }
    }

    cout << "\nTotal Weight of MST: " << totalWeight << endl;

    return 0;
}
