#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav()
{
    string p, s;
    cin >> p >> s;


    int s_idx = 0;

    for (char hit : p)
    {
       
        if (s_idx >= s.length() or s[s_idx] != hit)
        {
            no return;
        }
        s_idx++;

     
        if (s_idx < s.length() and s[s_idx] == hit)
        {
            s_idx++;
        }
    }

   
    if (s_idx == s.length())
    {
        yes
    }
    else
    {
        no
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    // sourav();
    // cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}