#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMinVertex(int dist[], bool visited[], int n){
    int minVertex = -1;

    for (int i = 0; i < n; i++){
        if(!visited[i] && (minVertex == -1 || dist[i] < dist[minVertex])){
            minVertex = i;
        }
    }
    return minVertex;
}

// Function to print path
void printPath(int parent[], int j){
    if(parent[j] == -1){
        cout << j;
        return;
    }
    printPath(parent, parent[j]);
    cout << " -> " << j;
}

void dijkstra(int graph[100][100], int n, int source, string label){

    int dist[100];
    bool visited[100];
    int parent[100];

    for(int i = 0; i < n; i++){
        dist[i] = 10000;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[source] = 0;

    int sum = 0;

    for (int i = 0; i < n - 1; i++){
        int u = findMinVertex(dist, visited, n);

        visited[u] = true;
        sum += u;

        for (int v = 0; v < n; v++){
            if(!visited[v] && graph[u][v] != 0 && dist[u] + graph[u][v] < dist[v]){
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    cout << "\nResult for " << label << "\n";

    cout << "\nVertex Distance from Source\n";
    for(int i = 0; i < n; i++){
        cout << i << "  " << dist[i] << endl;
    }

    cout << "\nPaths from Source:\n";
    for(int i = 0; i < n; i++){
        cout << "To " << i << ": ";
        printPath(parent, i);
        cout << endl;
    }

    cout << "\nSum of visited vertices: " << sum << endl;
}

int main(){
    int n;
    cin >> n;

    int graph[100][100], undirected[100][100];

    // Input directed graph
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> graph[i][j];
            undirected[i][j] = graph[i][j];
        }
    }

    int source;
    cin >> source;

    // Make undirected graph symmetric
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(undirected[i][j] != 0){
                undirected[j][i] = undirected[i][j];
            }
        }
    }

    // Run Dijkstra for directed graph
    dijkstra(graph, n, source, "Directed Graph");

    // Run Dijkstra for undirected graph
    dijkstra(undirected, n, source, "Undirected Graph");

    return 0;
}