
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#define ll long long
#define MOD 1000000007
using namespace std;

int boom(int n, string s) {
    if (n == 2) {
        if (s[0] == '0') {
            return s[1] - '0';
        }
        return stoi(s);
    }
    

    bool contains_zero = false;
    for (char c : s) {
        if (c == '0') {
            contains_zero = true;
            break;
        }
    }
    
    if (contains_zero) {
        if (n >= 4) {
            return 0;
        } else {
            if (s[1] == '0') {
                int a = s[0] - '0';
                int b = s[2] - '0';
                return min(a + b, a * b);
            } else {
                return 0;
            }
        }
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        vector<ll> v;
        for (int j = 0; j < n; ++j) {
            if (j == i) {
                string val = "";
                val = val + s[j] + s[j + 1];
                j++;
                v.push_back(stoi(val));
            } else {
                string val = "";
                val = val + s[j];
                v.push_back(stoi(val));
            }
        }
        
        int sourav = v[0];
        if (sourav == 1) {
            sourav = 0;
        }
        
        for (int k = 1; k < v.size(); ++k) {
            if (v[k] == 1) {
                continue;
            }
            sourav += v[k];
        }
        
        ans = min(ans, sourav);
    }
    
    return ans;
}

int main() {
    
    
    ll t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        string s;
        cin >> s;
    
        cout << boom(n, s) << endl;
    }

    return 0;
}
