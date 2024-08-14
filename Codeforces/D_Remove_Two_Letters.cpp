#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str1;
        cin >> str1;
        string str2 = "";

        for (int i = 2; i <= n; i++)
        {
            str2.push_back(str1[i]);
        }

        int str1_index = 0, str2_index = 0;

        int res = 1;

        while (str1_index < n-2)
        {
            if (str1[str1_index] != str2[str2_index])
            {
                res++;
            }

            str1_index++;
            str2_index++;
        }
        cout << res << endl;
    }
return 0;
}