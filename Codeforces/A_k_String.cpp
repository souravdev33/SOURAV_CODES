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

    int k;
    cin >> k;
    string str;
    cin >> str;

    map<char, int> freq;

    for (auto ch : str)
    {

        freq[ch]++;
    }

    bool flag = true;

    for (auto it : freq)
    {

        if (it.second % k != 0)
        {

            flag = false;
            break;
        }
    }

    if (!flag)
    {

        cout << -1 << endl;
    }
    else
    {

        string str2 = "";

        for (auto it : freq)
        {

            str2 += string(it.second / k, it.first);
        }

        string str3 = "";

        for (int i = 0; i < k; i++)
        {

            str3 += str2;
        }

        cout << str3 << endl;
    }

    return 0;
}
