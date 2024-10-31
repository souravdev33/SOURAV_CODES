#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long
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
        vector<int> arr(n);

        for (int &i : arr)
        {
            cin >> i;
        }

        int cum_and = arr[0];
        for (int i = 1; i < n; i++)
        {
            cum_and &= arr[i];

            if (cum_and == 0)
                break;
        }

        ll res = 0;

        for (int i = 0; i < 31; i++)
        {
            if (cum_and & (1 << i))
            {
                res += (1 << i);
            }
        }

        cout << res << endl;
    }

    return 0;
}