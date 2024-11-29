// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int minDistance(int dist[], bool visited[], int V) {
//     int min = INT_MAX;
//     int min_index = -1;
//     for (int v = 0; v < V; v++) {
//         if (!visited[v] && dist[v] <= min) {
//             min = dist[v];
//             min_index = v;
//         }
//     }
//     return min_index;
// }

// void printPath(vector<int>& parent, int j) {
//     stack<int> path;
//     while (j != -1) {
//         path.push(j);
//         j = parent[j];
//     }
//     while (!path.empty()) {
//         cout << char(path.top() + 'A') << " ";
//         path.pop();
//     }
//     cout << endl;
// }

// void dijkstra(vector<vector<int>>& adj, int V, int S) {
//     int dist[V];
//     bool visited[V] = {false};
//     vector<int> parent(V, -1);

//     for (int i = 0; i < V; i++) {
//         dist[i] = INT_MAX;
//     }

//     dist[S] = 0;

//     for (int cnt = 0; cnt < V - 1; cnt++) {
//         int u = minDistance(dist, visited, V);
//         visited[u] = true;

//         for (int v = 0; v < V; v++) {
//             if (!visited[v] && adj[u][v] && dist[u] != INT_MAX &&
//                 dist[u] + adj[u][v] < dist[v]) {
//                 dist[v] = dist[u] + adj[u][v];
//                 parent[v] = u;
//             }
//         }
//     }
//     cout << "Shortest distances from source city " << char(S+'A') << "to:\n";
//     for (int i = 0; i < V; i++) {
//         cout << char (i + 'A') << " -> " << dist[i] << endl;
//     }

//     for (int i = 0; i < V; i++) {
//         if (i != S && dist[i] != INT_MAX) {
//             cout << "Path from city " << char (S+'A') << " to city " << char(i+'A') << ": ";
//             printPath(parent, i);
//         }
//     }
// }

// int main() {
//     int V, E;
//     char S;
//     cout<<"Enter the number of vertices and endges and source city : ";
//     cin >> V >> E >> S;

//     vector<vector<int>> adj(V, vector<int>(V, 0));


//     cout<<"Enter the source and destination and weight : "<<endl;
//     for (int i = 0; i < E; i++) {
//         char u, v;
//         int w;
//         cin >> u >> v >> w;
//         adj[u - 'A'][v - 'A'] = w;
//         adj[v - 'A'][u - 'A'] = w;
//     }

//     dijkstra(adj, V, S - 'A');

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

// Perform Depth-First Search to find an augmenting path
bool dfs(vector<vector<int>>& residualGraph, int source, int sink, vector<int>& parent) {
    int n = residualGraph.size();
    vector<bool> visited(n, false);
    stack<int> s;
    s.push(source);
    visited[source] = true;
    parent[source] = -1;

    while (!s.empty()) {
        int u = s.top();
        s.pop();

        for (int v = 0; v < n; v++) {
            if (!visited[v] && residualGraph[u][v] > 0) {
                s.push(v);
                parent[v] = u;
                visited[v] = true;

                // If sink is reached, return true
                if (v == sink) {
                    return true;
                }
            }
        }
    }

    return false;
}

// Ford-Fulkerson Algorithm using DFS for finding augmenting paths
int fordFulkerson(vector<vector<int>>& capacityGraph, int source, int sink) {
    int n = capacityGraph.size();
    vector<vector<int>> residualGraph = capacityGraph;
    vector<int> parent(n);

    int maxFlow = 0;

    // Augment the flow while there is an augmenting path
    while (dfs(residualGraph, source, sink, parent)) {
        int pathFlow = INF;

        // Find the minimum capacity in the path
        for (int v = sink; v != source; v = parent[v]) {
            int u = parent[v];
            pathFlow = min(pathFlow, residualGraph[u][v]);
        }

        // Update residual capacities
        for (int v = sink; v != source; v = parent[v]) {
            int u = parent[v];
            residualGraph[u][v] -= pathFlow;
            residualGraph[v][u] += pathFlow;
        }

        // Add path flow to the overall flow
        maxFlow += pathFlow;
    }

    return maxFlow;
}

int main() {
    // Number of vertices (source, W1, W2, W3, S1, S2, S3, sink)
    int n = 8;

    // Capacity graph (from the problem statement)
    vector<vector<int>> capacityGraph = {
        {0, 20, 30, 25, 0, 0, 0, 0},   // Source
        {0, 0, 0, 0, 10, 5, 0, 0},     // W1
        {0, 0, 0, 0, 0, 15, 10, 0},    // W2
        {0, 0, 0, 0, 15, 0, 12, 0},    // W3
        {0, 0, 0, 0, 0, 0, 0, 10},     // S1
        {0, 0, 0, 0, 0, 0, 0, 13},     // S2
        {0, 0, 0, 0, 0, 0, 0, 12},     // S3
        {0, 0, 0, 0, 0, 0, 0, 0}       // Sink
    };

    int source = 0; // Source node
    int sink = 7;   // Sink node

    cout << "The maximum flow is: " << fordFulkerson(capacityGraph, source, sink) << endl;

    return 0;
}
