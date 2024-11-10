#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j] and i != j)
            {
                count++;
                break;
            }
        }
    }
    cout << n - count << endl;
return 0;
}
