#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;

    string str = to_string(a);
    int rem = a % b;

    bool hobe = true;

    for (int i = 0; i < n; i++)
    {
        bool flag = false;

        for (int j = 0; j <= 9; j++)
        {
            int newrem = (rem * 10 + j) % b;

            if (newrem == 0)
            {
                str += to_string(j);
                rem = newrem;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            hobe = false;
            break;
        }
    }

    if (hobe)
    {
        cout << str << endl;
    }

    else
    {
        cout << -1 << endl;
    }

    return 0;
}
