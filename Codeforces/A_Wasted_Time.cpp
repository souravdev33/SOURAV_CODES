#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<pair<long long , long long >> coordinates(n);
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >>coordinates[i].first >> coordinates[i].second;

        if (i != 0)
        {
            long long x = coordinates[i].first - coordinates[i - 1].first;
            long long  y = coordinates[i].second - coordinates[i - 1].second;
            sum += sqrt(x * x + y * y);
        }
    }

    double res = (sum / 50.0) * k;
    cout << fixed << setprecision(9) << res << endl;

 return 0;
}
