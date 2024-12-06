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
    string str;
    cin >> str;

    for (int i = 1; i < str.size(); i++)
    {

        while (i > 0 && str[i]>'0' && str[i]>'0' && (str[i]) > str[i - 1])
        {

            str[i]--;

            swap(str[i - 1], str[i]);

            i--;
        }
    }

    cout << str << endl;
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
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}