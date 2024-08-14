#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    // while(a>0 and b>0){
    //     if(a>b) a=a%b;
    //     if(b>a) b=b%a;

    // }

    // if(a==0) cout<<"Gcd is :"<<b<<endl;
    // if(b==0) cout<<"Gcd is :"<<a<<endl;


    int gcddd=__gcd(a,b);

    int lcm=(a*b)/gcddd;

    cout<<lcm<<endl;


}
