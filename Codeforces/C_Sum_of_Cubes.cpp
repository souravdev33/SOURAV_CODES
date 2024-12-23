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
    ll x;
    cin >> x;

    unordered_set<ll> cubes;
    vector<ll> cubeList;

    for (ll i = 1; i * i * i <= x; i++)
    {
        ll cube = i * i * i;
        cubes.insert(cube);
        cubeList.push_back(cube);
    }

    for (ll i : cubeList)
    {
        ll bCube = x - i;

        if (bCube > 0 and cubes.count(bCube))
        {
            yes 
            return;
        }
    }

    no
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
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}