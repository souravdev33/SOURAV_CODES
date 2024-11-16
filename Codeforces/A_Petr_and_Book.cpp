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

    ll n;
    cin >> n;
    vector<int> v(7);
    ll sum = 0;

    for (auto &i : v)
        cin >> i;

    for (int i = 0; i <= 6; i++)
    {
        sum += v[i];
        if (sum >= n)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    while (1)
    {
        if (sum < n)
        {
            for (int i = 0; i <= 6; i++)
            {
                sum += v[i];
                
                    if (sum >= n)
                {
                    cout << i + 1 << endl;
                    return 0;
                }
            }
        }
    }

    
}