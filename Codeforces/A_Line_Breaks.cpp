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

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll total_length = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (total_length + v[i].size() <= m)
        {
            total_length += v[i].size();
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout << cnt << endl;
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