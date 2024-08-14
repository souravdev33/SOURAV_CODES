#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int initialspace=0;
    for(int i=0;i<n;i++){
     
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<initialspace;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        initialspace+=2;
        cout<<endl;

    }
    initialspace=8;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<initialspace;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initialspace-=2;
        cout<<endl;

    }
    
}