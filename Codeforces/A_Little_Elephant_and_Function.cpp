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

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vector<ll> v;

    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    vector<ll> ans;

    ans[0] = v[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        ans[i + 1] = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
