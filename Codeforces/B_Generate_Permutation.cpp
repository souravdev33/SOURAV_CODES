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
        ll n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else 
        {

            for (int i = n; i >= 1; i -= 2)
            {
                cout << i << " ";
                // odd descending'
            }

            for (int i = 2; i < n; i += 2)
            {
                cout << i << " "; 
                // even ascending
            }

            cout << endl;
        }
    }

    return 0;
}
