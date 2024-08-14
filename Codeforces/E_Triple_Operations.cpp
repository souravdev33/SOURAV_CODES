#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main() {
    ios::sync_with_stdio(false);  
    cin.tie(nullptr); 

    ll tc;  
    cin >> tc;

    while (tc--) {
        ll l, r;
        cin >> l >> r;

        ll power = static_cast<int>(log2(l) / log2(3));
        power++;
        ll res = 2 * power;

        
        while(r > l){
            
            ll k = static_cast<int>(log2(r) / log2(3));
            ll q = pow(3, k); 
            int count = r - max(q, l+1);
            res += (count + 1)*(k + 1); 
            r = q - 1;
        }

        cout << res << endl;
    }

return 0;
}

