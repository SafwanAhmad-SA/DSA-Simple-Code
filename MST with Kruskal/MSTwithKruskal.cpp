#include <iostream>
#include <algorithm>
using namespace std;

// Edge structure
class Edge {
public:
    int u, v, w;
};

// Function to find parent
int findParent(int parent[], int i) {
    while (parent[i] != i) {
        i = parent[i];
    }
    return i;
}

int main() {
    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    Edge edges[100];   // assuming max 100 edges
    int parent[100];

    // Initialize parent
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    // Input edges
    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    // Sort edges by weight (simple sorting)
    for (int i = 0; i < E - 1; i++) {
        for (int j = i + 1; j < E; j++) {
            if (edges[i].w > edges[j].w) {
                Edge temp = edges[i];
                edges[i] = edges[j];
                edges[j] = temp;
            }
        }
    }

    cout << "\nEdges in Minimum Spanning Tree:\n";

    int count = 0;
    int totalWeight = 0;

    // Kruskal algorithm
    for (int i = 0; i < E; i++) {

        int uParent = findParent(parent, edges[i].u);
        int vParent = findParent(parent, edges[i].v);

        // If no cycle
        if (uParent != vParent) {
            cout << edges[i].u << " - "
                 << edges[i].v << " : "
                 << edges[i].w << endl;

            totalWeight += edges[i].w;
            parent[uParent] = vParent;
            count++;
        }

        if (count == V - 1)
            break;
    }

    cout << "\nTotal Weight of MST: " << totalWeight << endl;

    return 0;
}