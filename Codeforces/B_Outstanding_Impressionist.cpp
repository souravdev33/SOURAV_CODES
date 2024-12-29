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

    vector<pair<int, int>> impression(n);
    for (int i = 0; i < n; i++)
    {
        cin >> impression[i].first >> impression[i].second;
    }

    string res = "";
    set<int> s;
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        if (impression[i].first == impression[i].second)
        {
            s.insert(impression[i].first);
            freq[impression[i].first]++;
        }
    }

    vector<int> ans;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        ans.push_back(*i);
    }

    for (int i = 0; i < n; i++)
    {
        int l = impression[i].first;
        int r = impression[i].second;

        if (l == r)
        {
            if (freq[l] > 1)
            {
                res.push_back('0');
            }
            else
            {
                res.push_back('1');
            }

            continue;
        }

        auto lower = lower_bound(ans.begin(), ans.end(), l) - ans.begin();
        auto upper = lower_bound(ans.begin(), ans.end(), r + 1) - ans.begin();
        auto len = (upper - 1) - lower + 1;

        if (len == r - l + 1)
        {
            res.push_back('0');
        }
        else
        {
            res.push_back('1');
        }
    }

    cout << res << endl;
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
