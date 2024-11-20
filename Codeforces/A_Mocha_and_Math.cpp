#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        int n;
        cin >> n;
        vector<int> v(n);

        for (auto &i : v)
            cin >> i;
        int res = v[0];
        for (int i = 0; i < n; i++)
        {
            res &= v[i];
        }
        cout << res << endl;
    }

    return 0;
}