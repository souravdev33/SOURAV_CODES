#include <iostream>
#include <vector>
#include <limits.h>
#include <list>
#include <utility>
using namespace std;

int minDistance(vector<int>& dist, vector<bool>& sptSet, int V) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void printSolution(const vector<int>& dist, const vector<int>& parent, int V) {
    cout << "Vertex \t Distance \t Parent" << endl;
    for (int i = 0; i < V; i++)
        cout << i << " " << dist[i] << " " << parent[i] << endl;
}

void dijkstra(const vector<list<pair<int, int>>>& adj, int src, int V) {
    vector<int> dist(V, INT_MAX);
    vector<bool> sptSet(V, false);
    vector<int> parent(V, -1);
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet, V);
        sptSet[u] = true;

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            if (!sptSet[v] && dist[u] != INT_MAX 
                && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
            }
        }
    }

    printSolution(dist, parent, V);
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<list<pair<int, int>>> adj(V);

    cout << "Enter the edges (source, destination, weight):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    dijkstra(adj, 0, V);

    return 0;
}
