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
    ll n, cnt = 0;
    cin >> n;

    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
        cnt++;
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
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}