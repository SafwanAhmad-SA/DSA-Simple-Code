#include <iostream>
using namespace std;

int main() {
    int V;

    cout << "Enter number of vertices: ";
    cin >> V;

    int graph[100][100];

    // Input adjacency matrix
    cout << "Enter adjacency matrix (0 for no edge):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int selected[100] = {0}; // track selected vertices
    selected[0] = 1; // start from vertex 0

    int edges = 0;
    int totalWeight = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    while (edges < V - 1) {
        int min = 9999;
        int x = 0, y = 0;

        // Find minimum edge
        for (int i = 0; i < V; i++) {
            if (selected[i]) {
                for (int j = 0; j < V; j++) {
                    if (!selected[j] && graph[i][j]) {
                        if (graph[i][j] < min) {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y << " : " << min << endl;

        totalWeight += min;
        selected[y] = 1;
        edges++;
    }

    cout << "\nTotal Weight of MST: " << totalWeight << endl;

    return 0;
}