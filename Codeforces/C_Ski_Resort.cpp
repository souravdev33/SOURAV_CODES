#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        ll ans = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a <= q)
            {
                count++;
            }
            else
            {
                if (count >= k)
                {
                    ans += (ll)(count - k + 1) * (count - k + 2) / 2;
                }
                count = 0;
            }
        }

        if (count >= k)
        {
            ans += (ll)(count - k + 1) * (count - k + 2) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
