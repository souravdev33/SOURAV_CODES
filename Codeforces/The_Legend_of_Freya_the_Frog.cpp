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
  
    int x1, y1, k;
    cin >> x1 >> y1 >> k;
    
    int x2 = (x1 + k - 1) / k;
    int y2 = (y1 + k - 1) / k;
    
    cout << max(2 * x2 -1, 2 * y2) << endl;
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



