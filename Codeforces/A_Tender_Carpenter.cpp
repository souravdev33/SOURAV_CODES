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
    for (auto &i : a)
        cin >> i;
    if (n == 2)
    {
        if (2 * a[0] > a[1] and 2 * a[1] > a[0])
        {
            yes
        }
        else
        {
            no
        }
    }

    else
    {
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (2 * a[i] > a[i + 1] and 2 * a[i + 1] > a[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            yes else no
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