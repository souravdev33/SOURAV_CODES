#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(auto& i : arr)cin>>i;
    int sum=0;
    for(int i: arr){
        sum+=i;
    }

    cout<<sum<<endl;
}