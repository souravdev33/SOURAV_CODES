#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int i ,int n){
    if(i<1)
    return;
    cout<<i<<" ";
    display(i-1,n);
    

}

int main(){
    int n;
    cin>>n;
    display(n,n);
}