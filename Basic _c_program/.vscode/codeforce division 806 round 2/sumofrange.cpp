#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main ()
{
    ll temp,a,b,c=0,d=0,e=0,i;
    cin>>a>>b;
    if(a>b)
    {
        swap(a,b);
    }
    a=a-1;
    c=(b*(b+1))/2 - (a*(a+1))/2;
    a=a+1;
    for(i=a;i<=b;i++){
        if(i%2==0){
            d+=i;
        }
        else{
            e+=i;
        }
    }
    cout<<c<<endl<<d<<endl<<e<<endl;
return 0;
}