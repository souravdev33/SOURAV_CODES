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
    int n, k;
    cin >> n >> k;

    int x = n * k;

    vector<int> v(x);

    for (auto &i : v)
    {
        cin >> i;
    }

    ll sum = 0;

    ll step = n / 2 + 1;

    ll idx = x - step;

    for (int i = 0; i < k; i++)
    {
        sum += v[idx];
        idx -= step;
    }
    cout << sum << endl;
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

