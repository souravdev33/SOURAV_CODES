#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;
        cout<<m[number]<<endl;
    }
    return 0;
}