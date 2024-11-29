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

    string n, m;
    cin >> n >> m;

    sort(n.begin(), n.end());

    if (n[0] == '0')
    {
        for (int i = 1; i < n.size(); i++)
        {
            if (n[i] != '0')
            {
                swap(n[0], n[i]);
                break;
            }
        }
    }

    if (n == m)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "WRONG_ANSWER" << endl;
    }

    return 0;
}
