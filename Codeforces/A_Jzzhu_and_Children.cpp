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
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    queue<ll> line;
    for (int i = 0; i < n; i++)
    {
        line.push(i);
    }

    ll lastchild = 0;

    while (!line.empty())
    {
        int x = line.front();
        line.pop();

        if (v[x] > m)
        {
            v[x] -= m;
            line.push(x);
        }
        else
        {
            lastchild = x;
        }
    }

    cout << lastchild + 1 << endl;
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
