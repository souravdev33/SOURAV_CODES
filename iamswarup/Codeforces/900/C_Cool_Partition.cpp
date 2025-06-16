#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> rightmost(n + 1, -1);
    for (int i = 0; i < n; i++) {
        rightmost[a[i]] = i;
    }
    
    int segments = 0;
    int i = 0;
    
    while (i < n) {
        int reach = i;
        set<int> seen;
        
        while (i <= reach) {
            seen.insert(a[i]);
            reach = max(reach, rightmost[a[i]]);
            i++;
        }
        
        segments++;
    }
    
    cout << segments << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    clock_t start = clock();
    
    int tc = 1;
    cin >> tc;
    
    for (int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";
        sourav();
    }
    
    // sourav();
    //cerr << "Time elapsed: " << clock() - start << "ms!\n";
    
    return 0;
}