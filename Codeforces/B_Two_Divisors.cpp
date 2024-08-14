#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long x, y;

        cin >> x >> y;

        ll lcmm = (x * y) / __gcd(x, y);
        if (y % x)
            cout << lcmm << endl;
        else
            cout << y * (y / x) << endl;
    }
}