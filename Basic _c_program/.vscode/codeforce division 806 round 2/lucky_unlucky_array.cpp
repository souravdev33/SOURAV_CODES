#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int min=arr[i];

    for(int i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else
    {
        cout<<"Lucky"<<endl;
    }
return 0;
    
}