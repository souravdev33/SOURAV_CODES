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
    ll sum = 0;

    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    if (sum % n != 0)
    {
        no
    }

    else
    {
        ll res = sum / n;
        ll even = 0, odd = 0;
        ll cnt_even = 0, cnt_odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                odd += v[i];
                cnt_odd++;
            }
            else
            {
                even += v[i];
                cnt_even++;
            }
        }

        ll tot_even = res * cnt_even;
        ll tot_odd = res * cnt_odd;

        if (even == tot_even && odd == tot_odd)
        {
            yes
        }

        else
        {
            no
        }
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