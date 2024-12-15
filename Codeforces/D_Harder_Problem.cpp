#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v1(n), v2(n);
    unordered_map<ll, ll> freq;
    set<ll> s;

    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }

    for (auto &i : v1)
    {
        cin >> i;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[v1[i]] == 0)
        {
            v2[i] = v1[i];
            freq[v1[i]]++;
            s.erase(v1[i]);
        }
        else
        {
            ll val = *s.begin();
            v2[i] = val;
            freq[val]++;
            s.erase(val);
        }
    }

    for (auto &i : v2)
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
        solve();
    }

    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
