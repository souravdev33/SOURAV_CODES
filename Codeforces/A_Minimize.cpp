#include <iostream>
#include <bits/stdc++.h>
#include <Algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using namespace std;

void dev() {   
    int a, b;
    cin >> a >> b;  
    cout << (b - a) << endl; 
}

int32_t main() {
    fast_io;

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        dev();
    }

    return 0;
}