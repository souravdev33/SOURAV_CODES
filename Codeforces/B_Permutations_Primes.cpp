#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void dev()
{

    int n;
    cin >> n;
    int MEX = 2;

    for (int i = 1; i <= n; i++)
    {
        if (MEX == 3)
            MEX++;

        if (i == n / 2 + 1)
            cout << 1 << " ";

        else if (i == n and n >= 3)
            cout << 3 << " ";
            
        else
            cout << MEX++ << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        dev();
    }

    return 0;
}