#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int main() {
    ll tc;
    cin>>tc;
    while (tc-->0){
        ll n;
        cin>>n;
        vector<ll>v(n);

        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        ll prefix=0,sum=0,maxx=0;

        for (ll i=0;i<n;i++) {
            sum+=v[i];
            maxx=max(maxx,v[i]);
			if(sum-maxx==maxx){
                 prefix++;
            }  
        }
        cout<<prefix<<endl;
    }
return 0;
}
