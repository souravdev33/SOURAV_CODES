#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;


string result(const string &str1)
{
    string str2;
   
    for (int i = str1.size() - 1; i >= 0; --i)
    {
        if (str1[i] == 'p')
        {
            str2 += 'q';
        }
        else if (str1[i] == 'q')
        {
            str2 += 'p';
        }
        else if (str1[i] == 'w')
        {
            str2 += 'w';
        }
    }
    return str2;
}

void sourav()
{
    string str1;
    cin >> str1; 
    cout << result(str1) << endl;
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

    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}
