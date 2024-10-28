#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> pr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pr[i] = arr[i] + pr[i - 1];
        }

        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        unordered_map<ll, ll> mp;
        mp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1];
            if (mp.find(pr[i]) != mp.end())
            {
                dp[i] = max(dp[i], dp[mp[pr[i]]] + 1);
            }
            mp[pr[i]] = i;
        }

        cout << dp[n] << endl;
    }

    return 0;
}
