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

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {

                cout << (i * n + j / 2) + 1 << " ";
            }
            else
            {

                cout << n * n - (i * n + j / 2) << " ";
            }
        }
        cout << endl;
    }
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
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}