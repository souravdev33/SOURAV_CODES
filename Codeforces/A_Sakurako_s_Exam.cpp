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
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 and b % 2 == 0)
        {
            yes;
            continue;
        }
        else if (a % 2 == 0 and b == 0)
        {
            yes;
            continue;
        }
        else if (a == 0 and b % 2 == 0)
        {
            yes;
            continue;
        }
        else if (a == 0 and b % 2 != 0)
        {
            no;
            continue;
        }
        else if (b == 0 and a % 2 != 0)
        {
            no;
            continue;
        }
        else if (a % 2 == 0 and b % 2 != 0)
        {
            yes;
            continue;
        }
        else
        {
            no;
        }
    }
    return 0;
}