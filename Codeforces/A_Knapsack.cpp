#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n, W;
        cin >> n >> W;

        vector<pair<int, int>> items;
        for (int i = 0; i < n; i++)
        {
            int weight;
            cin >> weight;
            items.push_back({weight, i + 1});
        }

        ll min_weight = (W + 1) / 2;
        vector<int> selected;
        ll current_sum = 0;

        bool found_single = 0;
        for (const auto &item : items)
        {
            if (item.first >= min_weight and item.first <= W)
            {
                cout << 1 << endl << item.second << endl;
                found_single = 1;
                break;
            }
        }

        if (found_single)
            continue;

        sort(items.begin(), items.end());

        for (const auto &item : items)
        {
            if (current_sum + item.first <= W)
            {
                selected.push_back(item.second);
                current_sum += item.first;
            }
            if (current_sum >= min_weight)
                break;
        }

        if (min_weight <= current_sum)
        {
            cout << selected.size() << endl;
            for (auto idx : selected)
            {
                cout << idx << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
