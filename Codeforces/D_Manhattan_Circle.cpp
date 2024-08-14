/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ
                                Author :- Sourav Dev
-----------------------------------------------------------------------------------*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;
        char Mx[n][m];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> Mx[i][j];
            }
        }

        ll min_x = INT_MAX, max_x = 0;
        ll min_y = INT_MAX, max_y = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (Mx[i][j] == '#')
                {
                    if (i < min_x)
                        min_x = i;
                    if (i > max_x)
                        max_x = i;
                    if (j < min_y)
                        min_y = j;
                    if (j > max_y)
                        max_y = j;
                }
            }
        }

        ll h = ((min_x + max_x) / 2) + 1;
        ll k = ((min_y + max_y) / 2) + 1;

        cout << h << " " << k << endl;
    }
    return 0;
}
