#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
            if(count==3){
                cout<<"True"<<endl;
                return 0;
            }
        }
        if(arr[i]%2==0){
            count=0;
        }
    }
    cout<<"False"<<endl;
    
    

}
