#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main() {
    int tc;
    cin >>tc;
    while(tc--) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll i,n,x,sum=0;
        cin>>n;
        vector<ll>v1,v2;
        
        for (i=0;i<n;i++){
            cin>>x;
            if(x&1) 
                v1.push_back(x);
            else 
                v2.push_back(x);
        }
        
        if(v1.empty() or v2.empty()){
            cout<<0<<endl;
            continue;
        }
        
        sort(v1.begin(), v1.end());

        sort(v2.begin(), v2.end());
        
      
        ll val=v1.back();

        for (i=0;i<v2.size();i++) {
            if (val>v2[i]) {
                val+=v2[i];
                sum++;
            } 
            else{
                cout<<v2.size()+1<<endl; 
                break;
            }
        }
        
        if (i==v2.size()){
            cout<<sum<<endl;
        }
    }
    
    return 0;
}


