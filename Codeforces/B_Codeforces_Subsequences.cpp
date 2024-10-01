#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;



int main() {
    ll k;
    cin >> k;

    ll n = pow(k, 0.1);
    ll m = pow(n, 10);

    string str = "codeforces";

    for (char ch : str) {
        
        int repeat;
        if (m < k) {
            repeat = n + 1;
        }
         else {
            repeat = n;
        }
        
        for (int i = 0; i < repeat; i++) {
            cout << ch;
        }

        m = m / n * repeat;
    }

    cout << endl;

return 0;
}
