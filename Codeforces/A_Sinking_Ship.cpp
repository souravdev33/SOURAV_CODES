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

    vector<pair<string, string>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "rat")
        {
            cout << p[i].first << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "woman" or p[i].second == "child")
        {
            cout << p[i].first << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "man")
        {
            cout << p[i].first << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i].second == "captain")
        {
            cout << p[i].first << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++)
    // {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
