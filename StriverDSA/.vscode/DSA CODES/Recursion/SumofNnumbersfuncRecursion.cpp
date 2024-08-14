#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int display(int n){
    if(n==0) return 0;
    
    return n+display(n-1);

}
int main(){
    int n;
    cin>>n;
    int sum=display(n);
    cout<<sum;

}