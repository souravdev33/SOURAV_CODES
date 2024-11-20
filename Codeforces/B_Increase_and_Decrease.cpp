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

    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    ll sum = accumulate(v.begin(), v.end(), 0);

    cout << (sum % n == 0 ? n : n - 1) << endl;

    return 0;
}

