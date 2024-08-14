// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;

// const int N = 2e5 + 10;
// ll n, m, a[N], b[N];

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         cin >> n;
//         string str;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             b[i] = a[i];
//             if (i != 0)
//                 b[i] += b[i - 1];
//         }
//         cin >> str;
//         ll ans = 0;
//         for (int i = 0, j = n - 1; i < j;)
//         {
//             if (str[i] != 'L')
//             {
//                 i++;
//                 continue;
//             }
//             if (str[j] != 'R')
//             {
//                 j--;
//                 continue;
//             }
//             if (i != 0)
//                 ans += b[j] - b[i - 1];
//             else
//                 ans += b[j];
//             str[i] = str[j] = '.';
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        vector<ll> pf(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (i == 0)
            {
                pf[i] = v[i];
            }
            else
            {
                pf[i] = v[i] + pf[i - 1];
            }
        }

        string str;
        cin >> str;

        ll res = 0;
        ll i = 0, j = n - 1;

        while (i < j)
        {

            while (i < j and str[i] != 'L')
                i++;

            while (i < j and str[j] != 'R')
                j--;

            if (i < j)
            {

                if (i > 0)
                {
                    res += pf[j] - pf[i - 1];
                }
                else
                {
                    res += pf[j];
                }

                str[i] = '.';
                str[j] = '.';
                i++;
                j--;
            }
        }

        cout << res << endl;
    }

    return 0;
}
