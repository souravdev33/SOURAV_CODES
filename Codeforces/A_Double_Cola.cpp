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

    queue<pair<string, int>> q;
    q.push({"Sheldon", 1});
    q.push({"Leonard", 1});
    q.push({"Penny", 1});
    q.push({"Rajesh", 1});
    q.push({"Howard", 1});

    while (n > 0)
    {
        auto curr = q.front();
        q.pop();

        if (n <= curr.second)
        {

            cout << curr.first;
            break;
        }

        n -= curr.second;
        curr.second *= 2;
        q.push(curr);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}