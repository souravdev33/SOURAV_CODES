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
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> v(n + 1, 0);

    for (int i = 0; i < n; i++)
    {

        v[i + 1] = v[i] + a[i];
        if (i + 1 < n)
        {
            v[i + 1] -= b[i + 1];
        }

        v[i + 1] = max(v[i + 1], v[i]);
    }

    cout << v[n] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        sourav();
    }
    cerr << "Time elapsed: " << clock() - start << "ms!\n";
    return 0;
}
