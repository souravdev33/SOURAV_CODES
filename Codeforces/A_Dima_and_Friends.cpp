#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int &i : arr){
        cin>>i;

    }
    int sum=0;

    for(int &i : arr){
        sum+=i;

    }
    if(sum%n==1){
        cout<<n+1<<endl;
    }
    


    
}