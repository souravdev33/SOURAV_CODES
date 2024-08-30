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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while (tc-- > 0)
    {
        int l, r;
        cin >> l >> r;
        int L, R;
        cin >> L >> R;

        if (r < L or R < l)
        {
            cout << 1 << endl;
            continue;
        }

        vector<ll> rooms(101, 0);

        for (int i = l; i <= r; i++)
        {
            rooms[i]++;
        }
        for (int i = L; i <= R; i++)
        {
            rooms[i]++;
        }

        int ans = 0;

        for (int i = 1; i <= 100; i++)
        {
            if (rooms[i] == 2 and rooms[i - 1] > 0)
            {
                ans++;
            }
            if (rooms[i] == 1 and rooms[i - 1] == 2)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}