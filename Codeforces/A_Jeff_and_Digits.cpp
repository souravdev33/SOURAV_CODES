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

    ll n;
    cin >> n;

    int five = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        ll digit;
        cin >> digit;
        if (digit == 5)
        {
            five++;
        }
        else if (digit == 0)
        {
            zero++;
        }
    }

    if (zero == 0)
    {
        cout << -1 << endl;
        return;
    }

    if (five < 9)
    {
        cout << 0 << endl;
        return;
    }

    five = (five / 9) * 9;

    if (five == 0)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < five; i++)
    {
        cout << 5;
    }

    for (int i = 0; i < zero; i++)
    {
        cout << 0;
    }

    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
