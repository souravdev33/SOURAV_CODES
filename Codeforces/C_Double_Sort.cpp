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
    vector<int> a(n), b(n);
    vector<pair<int, int>> res;

    for (int &i : a)
    {
        cin >> i;
    }

    for (int &i : b)
    {
        cin >> i;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1] or b[j] > b[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                res.push_back({j + 1, j + 2});
            }
        }
    }

    if (is_sorted(a.begin(), a.end()) and is_sorted(b.begin(), b.end()))
    {
        cout << res.size() << endl;
        for (auto &i : res)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
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
