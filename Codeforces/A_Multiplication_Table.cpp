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

    int n, x;
    cin >> n >> x;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            int j = x / i;

            if (j <= n)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}



