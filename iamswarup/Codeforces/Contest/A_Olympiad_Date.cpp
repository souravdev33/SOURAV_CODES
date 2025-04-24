#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define debug(x) cerr << #x << " = " << (x) << endl
using ll = long long;
using namespace std;

void sourav()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string str = "01032025";

    for (int k = 1; k <= n; k++)
    {
        vector<ll> count(10, 0), targetCount(10, 0);

        for (auto ch : str)
        {
            targetCount[ch - '0']++;
        }

        for (int i = 0; i < k; i++)
        {
            count[arr[i]]++;
        }

        bool pos = 1;
        for (int d = 0; d < 10; d++)
        {
            if (count[d] < targetCount[d])
            {
                pos = 0;
                break;
            }
        }

        if (pos)
        {
            cout << k << endl;
            return;
        }
    }

    cout << 0 << endl;
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

    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}