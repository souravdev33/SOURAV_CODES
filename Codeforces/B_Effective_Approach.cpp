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

//     int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int &i : arr)
//     {
//         cin >> i;
//     }

//     int q;
//     cin >> q;

//     ll vasya = 0, patya = 0;

//     while (q--)
//     {
//         int x;
//         cin >> x;

//         for (int i = 0; i < n; i++)
//         {
//             vasya++;
//             if (x == arr[i])
//             {
//                 break;
//             }
//         }

//         for (int i = n - 1; i >= 0; i--)
//         {
//             patya++;
//             if (x == arr[i])
//             {
//                 break;
//             }
//         }
//     }

//     cout << vasya << " " << patya << endl;

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

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int &i : arr)
    {
        cin >> i;
    }

    int q;
    cin >> q;
    ll vasya = 0, petya = 0;

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++)
    {
        pos[arr[i]] = i + 1;
    }

    while (q--)
    {
        int x;
        cin >> x;
        vasya += pos[x];
        petya += n - pos[x] + 1;
    }

    cout << vasya << " " << petya << endl;

return 0;
}
