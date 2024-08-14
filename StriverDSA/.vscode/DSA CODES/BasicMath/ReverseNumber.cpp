#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int revnum=0;
    while(n>0){
        int lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    cout<<revnum<<endl;
}