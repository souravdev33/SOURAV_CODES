#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void dev()
{
    string str1, str2, temp = "";
    cin >> str1 >> str2;
    unordered_map<char,int>m;

    for (const auto ch : str2)
    {
        m[ch]++; 
    }

    for (int i = str1.size()-1 ; i >= 0; i--)
    {
        if (m[str1[i]] != 0)
        {
            temp += str1[i];
            m[str1[i]]--;
        }
    }
    reverse(temp.begin(), temp.end()); 

    if (str2 == temp)
        yes
    else
        no
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        dev();
    }

    return 0;
}
