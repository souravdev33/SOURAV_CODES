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

    if (n % 2 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
