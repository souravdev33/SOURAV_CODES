#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int i;
    cin>>n;
    
    int f=0;
    if (n <= 1)
    {
        f = 1; 
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
  
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}