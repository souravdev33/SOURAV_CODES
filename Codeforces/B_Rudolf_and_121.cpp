#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;

    while(tc-->0) {
        ll n;
        cin>>n;
        vector<int>v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
        }

        bool flag=true;

        for (int i=0;i<n-2;i++) {
            if (v[i]>0){
                int kombe = v[i];
                v[i] -= kombe;
                v[i+1] -= 2*kombe;
                v[i+2] -= kombe;
            }
        }

        for (int i=0;i<n;i++) {
            if (v[i] != 0) {
                flag=false;
                break;
            }
        }

        if (flag) yes
        else no
    }

return 0;
}
