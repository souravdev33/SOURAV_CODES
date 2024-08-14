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
    int tc;
    cin >> tc;
    while (tc--)
    { 
        int n;
        cin >> n;
        string str=to_string(n);

        if (str.size() < 3 or str[0] != '1' or str[1] != '0' or str[2] == '0')
        {
            no
        }
        else if (str.size() == 3)
        {
            if (str[2] == '1')
                no
            else
                yes
        }
        else
                yes            
    }
return 0;
}


