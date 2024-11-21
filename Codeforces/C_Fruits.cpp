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

    ll n, m;
    cin >> n >> m;
    vector<ll> price_tag(n);

    for (auto &i : price_tag)
        cin >> i;

    vector<string> fruits(m);

    for (auto &i : fruits)
        cin >> i;

    map<string, ll> mp;

    for (auto i : fruits)
    {
        mp[i]++;
    }

    sort(price_tag.begin(), price_tag.end());

    vector<int> freq_fruit;

    ll maxxx = 0, minnn = 0;
    for (auto &i : mp)
    {
        freq_fruit.push_back(i.second);
    }

    sort(freq_fruit.begin(), freq_fruit.end());

    reverse(freq_fruit.begin(), freq_fruit.end());

    for (int i = 0; i < freq_fruit.size(); i++)
    {

        minnn += freq_fruit[i] * price_tag[i];
    }

    reverse(price_tag.begin(), price_tag.end());

    for (int i = 0; i < freq_fruit.size(); i++)
    {

        maxxx += freq_fruit[i] * price_tag[i];
    }

    cout << minnn << " " << maxxx << endl;

    return 0;
}
