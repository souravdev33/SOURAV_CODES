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
    vector<int> a(n);

    int odd = n;
    if (n % 2 == 0)
    {
        odd = n - 1;
    }
    int even = 2;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = odd;
            odd -= 2;
        }
        else
        {
            a[i] = even;
            even += 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    // sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
