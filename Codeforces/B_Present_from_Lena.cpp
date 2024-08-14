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

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j < i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j < i)
                cout << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}
