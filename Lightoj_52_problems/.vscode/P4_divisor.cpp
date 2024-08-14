#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        int n;
        cin>>n;
        cout<<"Case"<<" "<<i<<":"<<" ";
        for(int j=1;j<=n;j++){
            if(n%j==0){
                cout<<j<<" ";
            } 
        }
        cout<<endl;
    }
}