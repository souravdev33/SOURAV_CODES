#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

ll sumofdigits(ll n)
{
    ll sum = 0, pow = 1;

    while (pow <= n)
    {
        ll zerotonine = n / (pow * 10);
        ll currdigit = (n / pow) % 10;
        ll remainder = n % pow;
        sum += zerotonine * 45 * pow;
        sum += currdigit * (currdigit - 1) / 2 * pow;
        sum += currdigit * (remainder + 1);
        pow *= 10;
    }
    return sum;
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
        ll n;
        cin >> n;
        cout << sumofdigits(n) << endl;
    }

    // sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
