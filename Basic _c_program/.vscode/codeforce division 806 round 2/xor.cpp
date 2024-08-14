#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    long long count=c%3;

    if(count==1)
    {
        cout<<a<<endl;
    }
    else if(count==2)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<(a^b)<<endl;
    }
return 0;

    
}