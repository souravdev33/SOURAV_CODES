#include<iostream>
#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll fact=1;

        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    }
return 0;
}