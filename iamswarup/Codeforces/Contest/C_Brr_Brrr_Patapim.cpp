#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }

    vector<int> permutation(2 * n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            permutation[i + j + 2] = g[i][j];
        }
    }

    set<int> unused;
    for (int i = 1; i <= 2 * n; i++)
    {
        unused.insert(i);
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        if (permutation[i] > 0)
        {
            unused.erase(permutation[i]);
        }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        if (permutation[i] == 0)
        {
            permutation[i] = *unused.begin();
            unused.erase(unused.begin());
        }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    // sourav();
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
