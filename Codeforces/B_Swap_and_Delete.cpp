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
    while(tc--){
        string str;
        cin>>str;
        ll cnt0=count(str.begin(),str.end(),'0');
        ll cnt1=count(str.begin(),str.end(),'1');
        ll i=0; 
        for(;i<str.length(); i++){
            if(str[i]=='0'){
                cnt1--;
            }
            else{
                cnt0--;
            }
            if(cnt1 < 0 || cnt0 < 0) break;
        }
        cout<<str.length()-i<<endl;
    }
}
