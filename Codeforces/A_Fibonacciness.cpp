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
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[3] >> v[4];
    vector<int> res = {v[0] + v[1], v[3] - v[1], v[4] - v[3]};

    sort(res.begin(), res.end());

    if (res[0] == res[2])
    {
        cout << 3 << endl;
    }
    else if (res[0] == res[1] or res[1] == res[2])
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    // sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
