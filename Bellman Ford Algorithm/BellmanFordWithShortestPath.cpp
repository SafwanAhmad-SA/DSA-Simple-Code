#include <iostream>
using namespace std;

class Edge {
public:
    int u, v, w;
};

// Function to print path
void printPath(int parent[], int j) {
    if (j == -1)
        return;

    printPath(parent, parent[j]);
    cout << j << " ";
}

int main() {
    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    Edge edges[100];

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int dist[100];
    int parent[100];

    // Initialize distances and parents
    for (int i = 0; i < V; i++) {
        dist[i] = 9999;
        parent[i] = -1;
    }

    int source = 0;
    dist[source] = 0;

    // Relax edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (dist[u] != 9999 && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
            }
        }
    }

    // Check for negative cycle
    for (int j = 0; j < E; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if (dist[u] != 9999 && dist[u] + w < dist[v]) {
            cout << "Graph contains negative weight cycle\n";
            return 0;
        }
    }

    // Print distances and paths
    cout << "\nShortest distances from source vertex 0:\n";
    for (int i = 0; i < V; i++) {
        cout << "0 -> " << i << " = " << dist[i] << " (";
        printPath(parent, i);
        cout << ")" << endl;
    }

    return 0;
}