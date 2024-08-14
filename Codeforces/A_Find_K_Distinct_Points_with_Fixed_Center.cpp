// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin >> tc;
//     while (tc-- > 0)
//     {
//         int x, y, k;
//         cin >> x >> y >> k;
//         int z = k / 2;
//         for (int i = 0; i < z; i++)
//         {
//             cout << x - i - 1 << ' ' << y << '\n';
//             cout << x + i + 1 << ' ' << y << '\n';
//         }
//         if (k & 1)
//             cout << x << ' ' << y << '\n';
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while (tc-- > 0)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        vector<pair<int, int>> v;

        if (k % 2 == 1)
        {
            cout << x << " " << y << endl;
        }
        for (int i = 1; i <= k / 2; i++)
        {
            v.push_back({x + i, y + i});
        }

        for (int i = 1; i <= k / 2; i++)
        {
            v.push_back({x - i, y - i});
        }
        for (auto i : v)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}