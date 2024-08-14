#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    bool k=true;
    int arr[]={1,5,6,89,24,45,57};
    for(int i=0;i<7;i++){
        if(arr[i]<=arr[i-1]){
            k=false;
        }
    }
    cout<<k;
}