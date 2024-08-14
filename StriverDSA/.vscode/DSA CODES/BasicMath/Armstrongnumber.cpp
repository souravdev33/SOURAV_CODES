#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n=t;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;

    }
    if(sum==t)
        cout<<"Armstrong number"<<endl;
    else 
        cout<<"Not a armstrong number"<<endl;
return 0;
}