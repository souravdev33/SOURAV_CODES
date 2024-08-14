

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using ll = long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//      freopen("input.txt","r",stdin);
//      freopen("output.txt","w",stdout);

//     ll n;
//     cin >> n;
//     vector<ll> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     if (v[n - 1] - v[0] <= 2)
//     {
//         cout << 0 << endl;
//         return 0;
//     }

//     int l = 0;
//     int r = n - 1;
//     int removed = 0;

//     while (l < r)
//     {
//         if (v[r] - v[l] > 2)
//         {
//             r--;
//             removed++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << removed << endl;

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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int low = i, high = n, x = n;

        while (low < high)
        {
            int mid = low + (high-low) / 2;

            if (v[mid] > 2 * v[i])
            {
                x = mid;
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }

        ans = min(ll(ans), i + (n - x));
    }

    cout << ans << endl;
return 0;
}
