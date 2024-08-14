#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string str=to_string(n);
    int count=0;
    while(str.size()!=0){
        str.pop_back();
        count++;

    }
    cout<<count<<endl;
    



}