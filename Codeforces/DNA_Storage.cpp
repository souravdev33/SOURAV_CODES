#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        int n;
        cin >> n;
        string str1, str2 = "";
        cin >> str1;
        for (int i = 0; i <= str1.size(); i += 2)
        {
            if (str1[i] == '0' and str1[i + 1] == '0')
            {
                str2 = str2 + "A";
            }
            else if (str1[i] == '0' and str1[i + 1] == '1')
            {
                str2 = str2 + "T";
            }
            else if (str1[i] == '1' and str1[i + 1] == '0')
            {
                str2 = str2 + "C";
            }
            else if (str1[i] == '1' and str1[i + 1] == '1')
            {
                str2 = str2 + "G";
            }
        }
        cout << str2 << endl;
    }

    return 0;
}