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
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        bool isGood = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[0] != str[n - 1])
            {
                isGood = true;
                break;
            }
        }

        if (isGood)
        {
            yes
        }
        else
        {
            no
        }
    }

    return 0;
}
