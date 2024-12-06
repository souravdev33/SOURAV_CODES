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
    string str;
    cin >> str;
    vector<ll> v = {1};
    ll pre = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (str[i] == str[i - 1])
            v.push_back(pre);
        else
        {
            v.push_back(i + 1);
            pre = i + 1;
        }
    }

    for (auto &i : v)
    {
        cout << i << " ";
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
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}