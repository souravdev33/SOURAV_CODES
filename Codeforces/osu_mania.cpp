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
  
        int n; 
        cin >> n;

        vector<string> v(n);
        for (auto &i : v) {
            cin >> i;
        }

     
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < v[i].size(); j++) {
                if (v[i][j] == '#') {
                    cout << j + 1 << " "; 
                    break;
                }
            }
        }
        cout << endl;
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