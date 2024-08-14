#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int sum=2*c;
    if(a>b)
        sum+=(2*b+1);
    else if(a==b)
        sum+=(2*a);
    else
        sum+=(2*a+1);
    cout<<sum;
    return 0;
}