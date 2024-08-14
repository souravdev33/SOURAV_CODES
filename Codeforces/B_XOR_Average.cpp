#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;

    while(tc-->0){
        ll n;
        cin>>n;
        if(n%2==1){
            for(ll i=1;i<=n;i++){
                cout<<1<<" ";  // xor=sum/n  so, n*xor=sum
            }
            cout<<endl;
        }
        else{
            for(ll i=1;i<=n-2;i++){
                cout<<2<<" ";
            }
            cout<<1<<3<<endl;
        }
    }

return 0;
}