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

    ll total = n * (n + 1) / 2;

    for (ll i = 1; i <= n; i <<= 1)
    {
        total -= 2 * i;
    }

    cout << total << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        sourav();
    }

    return 0;
}
