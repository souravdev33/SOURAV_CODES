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
    ll n;
    cin >> n;

    vector<vector<int>> laptops(n, vector<int>(4));

    for (int i = 0; i < n; i++)
    {
        cin >> laptops[i][0] >> laptops[i][1] >> laptops[i][2] >> laptops[i][3];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j and laptops[i][0] < laptops[j][0] and laptops[i][1] < laptops[j][1] and laptops[i][2] < laptops[j][2])
            {
                laptops[i][3] = INT_MAX;
                break;
            }
        }
    }

    ll min_cost = INT_MAX, bestLaptop = -1;

    for (int i = 0; i < n; i++)
    {
        if (laptops[i][3] < min_cost)
        {
            min_cost = laptops[i][3];
            bestLaptop = i + 1;
        }
    }

    cout << bestLaptop << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}