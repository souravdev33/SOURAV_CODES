#include <stdio.h>
#include <stdlib.h>

#define MAXN 20005

int parent[MAXN], rank[MAXN];


int findSet(int u) {
    if (u != parent[u])
        parent[u] = findSet(parent[u]);
    return parent[u];
}


void unionSets(int u, int v) {
    int pu = findSet(u);
    int pv = findSet(v);
    if (pu == pv) return;

    if (rank[pu] > rank[pv])
        parent[pv] = pu;
    else if (rank[pu] < rank[pv])
        parent[pu] = pv;
    else {
        parent[pu] = pv;
        rank[pv]++;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t) {
        int n;
        scanf("%d", &n);


        for (int i = 1; i <= 2 * n; ++i) {
            parent[i] = i;
            rank[i] = 0;
        }

        for (int i = 0; i < n; ++i) {
            int u, v;
            scanf("%d %d", &u, &v);


            unionSets(u, v + n);
        }

        int maxVampires = 0;
        for (int i = 1; i <= 2 * n; ++i) {
            if (parent[i] == i)
                maxVampires++;
        }

        printf("Case %d: %d\n", t, maxVampires);
    }

    return 0;
}
