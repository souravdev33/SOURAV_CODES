#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define Vertex int
#define ProgramEntry main
#define EdgeType signed
#define PairType pair
#define ContainerType vector

map<PairType<Vertex, Vertex>, Vertex> Mapping;
Vertex Clock;

PairType<Vertex, Vertex> Explore(Vertex current, ContainerType<ContainerType<Vertex>> &connections, ContainerType<Vertex> &heights, Vertex parent) {
    if (heights[current] != -1) {
        return {heights[current], 0};
    }

    Clock++;
    heights[current] = Clock;

    Vertex result = heights[current], sum = 1;

    for (auto &neighbor : connections[current]) {
        if (neighbor == parent) continue;
        PairType<Vertex, Vertex> Outcome = Explore(neighbor, connections, heights, current);
        Vertex x = Outcome.first, y = Outcome.second;

        sum += y;

        if (x <= heights[current]) {
            result = min(result, x);
        } else {
            Mapping[{current, neighbor}] = y; 
        }
    }

    heights[current] = result;
    return {result, sum};
}

EdgeType ProgramEntry() {
    Vertex testCases;
    cin >> testCases;
    while (testCases--) {
        Vertex nodes, edges;
        cin >> nodes >> edges;

        ContainerType<ContainerType<Vertex>> adjacencyList(nodes);
        while (edges--) {
            Vertex u, v;
            cin >> u >> v;
            u--;
            v--;
            adjacencyList[u].push_back(v);
            adjacencyList[v].push_back(u);
        }

        Mapping.clear();
        Clock = 0;
        ContainerType<Vertex> heights(nodes, -1);
        PairType<Vertex, Vertex> Result = Explore(0, adjacencyList, heights, -1);

        Vertex answer = nodes * (nodes - 1) / 2;
        for (auto &edge : Mapping) {
            Vertex left = edge.second, right = nodes - edge.second;
            answer = min(answer, (left * (left - 1) + (right * (right - 1))) / 2);
        }

        cout << answer << endl;
    }
    return 0;
}
