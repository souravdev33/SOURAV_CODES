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

    int n, k;
    cin >> n >> k;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<char, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    vector<int> freq_store;

    for (auto &i : freq)
    {
        freq_store.push_back(i.second);
    }
    sort(freq_store.begin(), freq_store.end());
    
    reverse(freq_store.begin(), freq_store.end());

    ll sum = 0;
    for (auto &i : freq_store)
    {
        if (k == 0)
        {
            break;
        }

        ll take = min(k, i);
        sum += take * take;
        k -= take;
    }

    cout << sum << endl;
    return 0;
}
