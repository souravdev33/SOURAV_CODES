#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    display(i-1,sum+i);
}



int main(){
    int n;
    cin>>n;
    display(n,0);
}