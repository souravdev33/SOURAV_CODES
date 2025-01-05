#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    ll A;
    cin >> A;

    ll total = 0;

    for (int i = 2; i < A; i++)
    {
        ll num = A, sum = 0;

        while (num > 0)
        {
            sum += num % i;
            num /= i;
        }

        total += sum;
    }

    ll numerator = total, denominator = A - 2;

    ll gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    cout << numerator << "/" << denominator << endl;
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