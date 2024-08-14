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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, k, w;
        cin >> n >> m >> k >> w;

        vector<ll> v(w);
        for (int i = 0; i < w; i++)
        {
            cin >> v[i];
        }

        vector<ll> ans(n * m);

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                int startRow = max(0ll, i - k + 1);
                int startCol = max(0ll, j - k + 1);
                int endRow = min(i, n - k);
                int endCol = min(j, m - k);
                ans.push_back((endRow - startRow + 1) * (endCol - startCol + 1));
            }
        }

        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        ll res = 0;

        for (int i = 0; i < w; i++)
        {
            res += ans[i] * v[i];
        }

        cout << res << endl;
    }

    return 0;
}
