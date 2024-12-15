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
    ll m, a, b, c;
    cin >> m >> a >> b >> c;

    ll row1 = min(a, m);

    ll rem_in_row1 = m - row1;

    ll row2 = min(b, m);

    ll rem_in_row2 = m - row2;

    ll total = row1 + row2;
    ll rem_seat = rem_in_row1 + rem_in_row2;

    total += min(c, rem_seat);

    cout << total << endl;
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