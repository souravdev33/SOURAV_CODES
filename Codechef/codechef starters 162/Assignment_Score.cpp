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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    ll sum = accumulate(arr.begin(), arr.end(), 0LL);

    ll total = (n + 1) * 100;
    ll min_marks = (total + 1) / 2;

    ll req_score = min_marks - sum;

    if (req_score > 100)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(0LL, req_score) << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        sourav();
    }

    return 0;
}
