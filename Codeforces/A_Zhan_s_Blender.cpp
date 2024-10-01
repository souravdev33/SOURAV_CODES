#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void dev(){

    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    if (x > y){
        x = y;
    }
    n += x - 1;
    n /= x;
    cout << n << endl;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++){

        // cout << "Case #" << i << ": ";
        dev();
    }

    return 0;
}
