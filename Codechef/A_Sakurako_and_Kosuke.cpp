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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        int pos= 0, move = 1;
        bool sakurako = true;

        while (1)
        {
            int step = (2 * move - 1);

            if (sakurako)
            {
                pos -= step; // negative
            }
            else
            {
                pos += step; // positive
            }

            if (abs(pos) > n)
            {
                if (sakurako)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }

            sakurako = !sakurako;
            move++;
        }
    }

    return 0;
}

