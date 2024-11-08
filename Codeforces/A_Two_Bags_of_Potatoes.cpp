#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    long long y, k, n;
    cin >> y >> k >> n;

    long long x = k - (y % k);

    for (; x + y <= n; x += k)
    {
        v.push_back(x);
    }

    if (v.size()==0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}