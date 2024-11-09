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

    int n;
    cin >> n;
    string str;
    cin >> str;

    string first_half = str.substr(0, n);
    string second_half = str.substr(n);

    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());

    bool all_less = true, all_greater = true;
    for (int i = 0; i < n; i++)
    {
        if (first_half[i] >= second_half[i])
        {
            all_less = false;
        }
        if (first_half[i] <= second_half[i])
        {
            all_greater = false;
        }
    }

    if (all_less or all_greater)
    {
        yes;
    }
    else
    {
        no;
    }

    return 0;
}
