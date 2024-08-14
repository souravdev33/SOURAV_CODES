// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;

// const int N = 2e5 + 10;
// int n, m, a[N], b[N];

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         cin >> n;

//         map<char, int> mp;
//         map<int, char> mpp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         cin >> m;
//         for (int i = 0; i < m; i++)
//         {
//             string str;
//             cin >> str;
//             if (str.size() != n)
//             {
//                 no
//                 continue;
//             }
//             bool flag = 1;
//             mp.clear();
//             mpp.clear();
//             for (int i = 0; i < n; i++)
//             {
//                 if (mp.count(str[i]))
//                     if (mp[str[i]] != a[i])
//                         flag = 0;
//                 if (mpp.count(a[i]))
//                     if (mpp[a[i]] != str[i])
//                         flag = 0;

//                 mp[str[i]] = a[i];
//                 mpp[a[i]] = str[i];
//             }
//             if (flag)
//                 yes
//             else
//                 no
//         }
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

const int N = 2e5 + 10;
int n, m, v[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cin >> m;
        while (m--)
        {
            string str;
            cin >> str;
            if (str.size() != n)
            {
                no continue;
            }

            map<char, int> cti; // char to int
            map<int, char> itc; // int to char

            bool flag = 1;

            for (int i = 0; i < n; i++)
            {
                char c = str[i];
                int num = v[i];

                if (itc.count(num) and itc[num] != c)
                {
                    flag = 0;
                    break;
                }
                if (cti.count(c) and cti[c] != num)
                {
                    flag = 0;
                    break;
                }

                cti[c] = num;
                itc[num] = c;
            }

            if (flag)
            {
                yes
            }
            else
            {
                no
            }
        }
    }

    return 0;
}
