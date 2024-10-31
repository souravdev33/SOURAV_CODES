#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        int res = 0, cur = 0;

        for (auto &i : v)
        {
            cur += i;
            res = max(res, cur);
            cur = max(cur, 0ll);
        }

        int ans = (accumulate(v.begin(), v.end(), 0ll) % MOD + MOD) % MOD;

        for (int i = 0; i < k; i++)
        {

            ans = (ans + res) % MOD;
            res = (res * 2) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}