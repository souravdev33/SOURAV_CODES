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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> vv = v;
    sort(v.begin(), v.end());
    int first = -1, second = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != vv[i])
        {
            if (first == -1)
            {
                first = i;
            }

            second = i + 1;
        }
    }

    reverse(vv.begin() + first, vv.begin() + second);

    if (is_sorted(vv.begin(), vv.end()))
    {
        cout << "yes" << endl;
        if (first == -1)
        {
            first = 0;
        }

        if (second == -1)
        {
            second = 1;
        }

        cout << first + 1 << " " << second << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}