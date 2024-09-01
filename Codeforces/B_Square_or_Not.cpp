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
    while (tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                cnt1++;
            if (str[i] == '0')
                cnt0++;
        }

        int x = sqrt(n);

        if (x * x == n)
        {
            if (cnt1 == (sqrt(n)) * 4 - 4 and cnt0 == n - cnt1)
            {
                yes;
                continue;
            }
            else
            {
                no;
                continue;
            }
        }
        else
        {
            no;
        }
    }
    return 0;
}