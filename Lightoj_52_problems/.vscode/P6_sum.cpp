#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a=n%10;
        int b=n/10000;
        cout<<"Sum = "<<a+b<<endl;
    }
}


