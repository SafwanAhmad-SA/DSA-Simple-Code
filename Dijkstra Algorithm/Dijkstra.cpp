#include <iostream>
using namespace std;

int main() {
    int V;

    cout << "Enter number of vertices: ";
    cin >> V;

    int graph[100][100];

    cout << "Enter adjacency matrix:\n";

    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int dist[100];
    int visited[100] = {0};

    // Initialize distances
    for(int i = 0; i < V; i++) {
        dist[i] = 9999;
    }

    int source = 0;
    dist[source] = 0;

    for(int count = 0; count < V - 1; count++) {

        int minDist = 9999;
        int u;

        // Find unvisited vertex with minimum distance
        for(int i = 0; i < V; i++) {
            if(!visited[i] && dist[i] < minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        visited[u] = 1;

        // Update distances of adjacent vertices
        for(int v = 0; v < V; v++) {

            if(graph[u][v] != 0 &&
               !visited[v] &&
               dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "\nShortest distances from source vertex 0:\n";

    for(int i = 0; i < V; i++) {
        cout << "0 -> " << i << " = " << dist[i] << endl;
    }

    return 0;
}
