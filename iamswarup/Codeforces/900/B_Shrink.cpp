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

    vector<int> res;

    if (n == 3)
    {
        res = {1, 3, 2};
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            res.push_back(i);
        }

        res.clear();

        res.push_back(2);
        res.push_back(3);

        int high = n, low = 4;
        bool use_high = true;

        for (int i = 2; i < n - 1; i++)
        {
            if (use_high)
            {
                res.push_back(high--);
            }
            else
            {
                res.push_back(low++);
            }
            use_high = !use_high;
        }

        res.push_back(1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;
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
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}