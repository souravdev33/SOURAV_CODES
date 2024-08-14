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
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int sum=0;

        if(v[1]!=0)sum=1;

        for(int i=1;i<=n;i++){
            if(i>v[i]){
                if(i<v[i+1] or i==n){
                    sum++;
                }
            }
        }
        cout<<sum<<endl;


    }
    return 0;
}