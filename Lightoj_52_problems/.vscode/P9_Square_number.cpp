#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a=sqrt(n);
        if(a*a==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}