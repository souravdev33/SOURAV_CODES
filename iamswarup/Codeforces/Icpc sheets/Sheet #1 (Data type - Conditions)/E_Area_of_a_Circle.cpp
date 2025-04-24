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
    double n;
    cin >> n;

    double res = (n * n) * (3.141592653);

    cout << fixed << setprecision(9) << res << endl;
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
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}