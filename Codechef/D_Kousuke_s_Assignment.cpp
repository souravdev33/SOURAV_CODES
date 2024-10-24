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
        ll n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll pfsum = 0;
        vector<int> dp(n + 1);

        unordered_map<int, int> mp;

        mp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            pfsum += arr[i];

            if (mp.find(pfsum) != mp.end())
            {
                int lastidx = mp[pfsum];
                dp[i + 1] = max(dp[i], dp[lastidx + 1] + 1);
            }
            else
            {
                dp[i + 1] = dp[i];
            }

            mp[pfsum] = i;
        }

        cout << dp[n] << endl;
    }

    return 0;
}
