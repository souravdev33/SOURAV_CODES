#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n=t;
    int revnum=0;
    while(n>0){
        int lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    if(revnum==t) cout<<"Its a Palindrome"<<endl;
    else cout<<"Not a palindrome"<<endl;
return 0;
}