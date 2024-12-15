#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < m; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;

        if (str1.size() <= str2.size())
        {
            mp[str1] = str1;
        }
        else
        {
            mp[str1] = str2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        string str3;
        cin >> str3;
        cout << mp[str3] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++)
    // {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}