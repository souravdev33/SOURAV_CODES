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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b = a;

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[0])
        {
            a[i] = b[n - 1];
        }
        else if (a[i] == b[n - 1])
        {
            a[i] = b[0];
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
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