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
    ll n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    ll x, y, sum = 0;
    cin >> x >> y;
    sum += (y - x) * p1;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        if (x - y <= t1)
        {
            sum += (x - y) * p1;
        }
        else if (x - y >= t1 + t2)
        {
            sum += t1 * p1 + t2 * p2 + (x - y - t1 - t2) * p3;
        }
        else
        {
            sum += t1 * p1 + (x - y - t1) * p2;
        }
        cin >> y;
        sum += (y - x) * p1;
    }
    cout << sum << endl;
return 0;
}