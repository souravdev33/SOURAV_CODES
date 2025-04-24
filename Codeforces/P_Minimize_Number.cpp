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
    int n, cnt = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        bool allEven = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                allEven = false;
                break;
            }
        }

        if (!allEven)
            break;

        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
        }

        cnt++;
    }
    cout << cnt << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // clock_t start = clock();

    // int tc = 1;
    // cin >> tc;

    // for (int i = 1; i <= tc; i++) {
    //     // cout << "Case #" << i << ": ";
    //     sourav();
    // }

    sourav();
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}