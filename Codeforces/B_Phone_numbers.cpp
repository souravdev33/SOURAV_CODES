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
    string str;

    cin >> n >> str;

    string res = "";
    int i = 0;

    if (n % 2 == 1)
    {

        res += str.substr(0, 3);
        i = 3;
        if (i < n)
        {
            res += "-";
        }
    }

    while (i < n)
    {
        res += str.substr(i, 2);
        i += 2;
        if (i < n)
        {
            res += "-";
        }
    }

    cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    sourav();

    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}