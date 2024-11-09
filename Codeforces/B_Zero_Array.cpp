#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> v(n);

    for (ll &i : v)
    {
        cin >> i;
    }
    ll sum = 0;

    for (ll &i : v)
    {
        sum += i;
    }

    ll maxx = *max_element(v.begin(), v.end());

    if (sum % 2 == 0 && maxx <= sum / 2)
    {
        yes;
    }
    else
    {
        no;
    }

    return 0;
}
