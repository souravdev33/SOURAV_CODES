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
    int n, x;
    cin >> n >> x;
    int a[11];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    bool used = false;
    int t = 0, endTime = -1;
    bool ok = true;

    for (int i = 0; i < n; ++i, ++t)
    {
        if (a[i] == 0)
            continue;
        if (!used)
        {
            used = true;
            endTime = t + x;
        }
        if (t >= endTime)
        {
            ok = false;
            break;
        }
    }

    if (ok)
        yes else no
}
            int32_t
            main()
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
