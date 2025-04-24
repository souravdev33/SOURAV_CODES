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
    ll n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    vector<int> odd(26, 0);
    ll odd_freq = 0;

    for (int i = 0; i < n; i++)
    {
        odd[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        odd_freq += odd[i] % 2;
    }

    if (odd_freq > k + 1)
        no else yes
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