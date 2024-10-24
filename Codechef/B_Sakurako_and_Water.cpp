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
    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n, total = 0;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }

        for (int start = 0; start < n; start++)
        {
            int diag1 = 0, diag2 = 0;

            for (int i = 0; i < n - start; i++)
            {
                diag1 = min(diag1, m[i][i + start]);
            }

            if (start != 0)
            {
                for (int i = 0; i < n - start; i++)
                {
                    diag2 = min(diag2, m[i + start][i]);
                }
            }

            if (diag1 < 0)
            {
                total += abs(diag1);
            }
            if (diag2 < 0)
            {
                total += abs(diag2);
            }
        }

        cout << total << endl;
    }

    return 0;
}
