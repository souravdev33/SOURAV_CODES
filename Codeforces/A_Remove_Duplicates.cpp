#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    list<int> li;
    unordered_set<int> seen;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool Unique = true;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                Unique = false;
                break;
            }
        }
        if (Unique and seen.find(v[i]) == seen.end())
        {
            li.push_back(v[i]);
            seen.insert(v[i]);
        }
    }

    cout << li.size() << endl;

    for (auto it : li)
    {
        cout << it << " ";
    }

    return 0;
}
