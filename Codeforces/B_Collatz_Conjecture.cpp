#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--){
        ll x, y, k;
        cin >> x >> y >> k;
        while (k != 0 and x > 1)
        {
            int count = min(k, y - (x % y));
            k -= count;
            x += count;
            while (x % y == 0)
            {
                x /= y;
            }
        }
        cout << x + k % (y - 1) << endl;
    }
    return 0;
}
