#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void dev(){

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = n; i > m; i--){
        cout << i << " ";
    }
    
    for (int i = 1; i <= m; i++){
        cout << i << " ";
    }
    cout << endl;
}

int32_t main(){

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
