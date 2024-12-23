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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll total = (a + b + c);
    ll cycles = (n / total);
    ll covered = (cycles * total);
    ll res_day = cycles * 3;

    if (covered >= n)
    {
        cout << res_day << endl;
        return;
    }

    if (covered + a >= n)
    {
        cout << res_day + 1 << endl;
    }
    else if (covered + a + b >= n)
    {
        cout << res_day + 2 << endl;
    }
    else
    {
        cout << res_day + 3 << endl;
    }
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
