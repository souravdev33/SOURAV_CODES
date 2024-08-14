#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<"Case"<<" "<<i<<":"<<" ";
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}