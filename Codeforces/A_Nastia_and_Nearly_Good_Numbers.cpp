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
        ll a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        ll x = a;
        ll y = a * b;
        ll z = a + a * b;

        cout << "YES" << '\n';
        cout << x << " " << y << " " << z << '\n';
    }
return 0;
}
