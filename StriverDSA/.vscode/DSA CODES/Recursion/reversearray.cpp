#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[]={14,56,34,56,67,34};

   
//    for(int i=0;i<3;i++){
//     int temp=arr[i];
//     arr[i]=arr[6-i-1];
//     arr[6-i-1]=temp;
//    }

//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";

//     }


// }

void revarr(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    revarr(i+1,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    revarr(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}