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
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }

    bool flag = true;

    for (int i = 0; i < n - 1; i++)
    {
        ll diff = abs(v[i] - v[i + 1]);
        if (diff != 5 and diff != 7)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        yes else no
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
