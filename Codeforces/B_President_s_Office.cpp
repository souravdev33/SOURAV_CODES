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

    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    set<char> vv;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (v[i][j] == c)
            {

                if (i > 0 and v[i - 1][j] != c and v[i - 1][j] != '.')
                {
                    vv.insert(v[i - 1][j]);
                }
                if (i < n - 1 and v[i + 1][j] != c and v[i + 1][j] != '.')
                {
                    vv.insert(v[i + 1][j]);
                }
                if (j > 0 and v[i][j - 1] != c and v[i][j - 1] != '.')
                {
                    vv.insert(v[i][j - 1]);
                }
                if (j < m - 1 and v[i][j + 1] != c and v[i][j + 1] != '.')
                {
                    vv.insert(v[i][j + 1]);
                }
            }
        }
    }

    cout << vv.size() << endl;

    return 0;
}
