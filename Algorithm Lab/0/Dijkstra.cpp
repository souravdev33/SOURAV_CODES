#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int minDistance(int dist[], bool visited[], int V) {
    int min = INT_MAX;
    int min_index = -1;
    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printPath(vector<int>& parent, int j) {
    stack<int> path;
    while (j != -1) {
        path.push(j);
        j = parent[j];
    }
    while (!path.empty()) {
        cout << char(path.top() + 'A') << " ";
        path.pop();
    }
    cout << endl;
}

void dijkstra(vector<vector<int>>& adj, int V, int S) {
    int dist[V];
    bool visited[V] = {false};
    vector<int> parent(V, -1);

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
    }

    dist[S] = 0;

    for (int cnt = 0; cnt < V - 1; cnt++) {
        int u = minDistance(dist, visited, V);
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && adj[u][v] && dist[u] != INT_MAX &&
                dist[u] + adj[u][v] < dist[v]) {
                dist[v] = dist[u] + adj[u][v];
                parent[v] = u;
            }
        }
    }
    cout << "Shortest distances from source city " << char(S+'A') << "to:\n";
    for (int i = 0; i < V; i++) {
        cout << char (i + 'A') << " -> " << dist[i] << endl;
    }

    for (int i = 0; i < V; i++) {
        if (i != S && dist[i] != INT_MAX) {
            cout << "Path from city " << char (S+'A') << " to city " << char(i+'A') << ": ";
            printPath(parent, i);
        }
    }
}

int main() {
    int V, E;
    char S;
    cout<<"Enter the number of vertices and endges and source city : ";
    cin >> V >> E >> S;

    vector<vector<int>> adj(V, vector<int>(V, 0));


    cout<<"Enter the source and destination and weight : "<<endl;
    for (int i = 0; i < E; i++) {
        char u, v;
        int w;
        cin >> u >> v >> w;
        adj[u - 'A'][v - 'A'] = w;
        adj[v - 'A'][u - 'A'] = w;
    }

    dijkstra(adj, V, S - 'A');

    return 0;
}