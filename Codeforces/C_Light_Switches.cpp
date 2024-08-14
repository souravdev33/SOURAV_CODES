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

    while(tc--){
        ll n,k;
        cin>>n>>k;

        vector<int>v(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        bool found=false;
        for (int i=v[n-1]; i<=v[n-1]+k;i++){
            bool flag = true;
            for (int j=0;j<n;j++){
                ll diff=i-v[j];
                ll ans= diff/k;
                if(ans%2==1){
                    flag=false;
                    break;
                }
                if (i < v[j]+ans*k   or   i > v[j]+(ans+1)*k) {
                    flag=false;
                    break;
                }
            }
            if (flag){
                cout<<i<<endl;
                found=true;
                break;
            }
        }

        if(!found){
            cout<<-1<<endl;
        }
    }

return 0;
}