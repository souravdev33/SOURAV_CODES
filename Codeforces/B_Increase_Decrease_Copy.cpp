#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc;
    cin>>tc;
    while(tc-->0){
        ll n,count=0;
        cin>>n;

        vector<int>v1(n),v2(n+1);

        for(int i=0;i<n;i++) {
            cin>>v1[i];
        }
        for(int i=0;i<=n;i++) {
            cin>>v2[i];
        }

        for(int i=0;i<n;i++){
            count += abs(v1[i]-v2[i]);
        }
        count++;

        ll mini=INT_MAX;
        for(ll i=0;i<n;i++){  
           
            ll a=min(v1[i],v2[i]);
            ll b=max(v1[i],v2[i]);
            if(v2[n]>=a && v2[n]<=b) {
                mini=0;
            }
            else{
                 mini=min(mini,(ll)min(abs(v2[n]-v2[i]),abs(v2[n]-v1[i])));
            }
       
         }
        count+=mini;
        
        cout<<count<<endl;
    }
    return 0;
}
