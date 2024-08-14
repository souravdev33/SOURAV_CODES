#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int i,int n){
    if(i>1) return;

    display(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    display(n,n);
}