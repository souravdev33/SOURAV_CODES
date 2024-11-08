#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        int n, x;
        cin >> n >> x;
        int even = 0, odd = 0;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0)even++;
            else odd++;
        }

        if(x%2==0){
            cout<<even-1<<endl;
        }
        else{
            cout<<odd-1<<endl;
        }
    }
}