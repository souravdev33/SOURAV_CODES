#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;
    while(tc-->0){
        int n;
        cin>>n;

        if(n%4==0){
            cout<<n/4<<endl;
        }
        else{
            cout<<n/4+1<<endl;
        }
     

    }
    return 0;
}