#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>&arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int partition(vector<int>&arr,int left,int right){
    int pivot=arr[right];
    int i=left-1;

    for(int j=left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,right); // here right is the pivot and it will be swaped with i+1 which is the correct place for pivot
    return i+1;
} 

void quicksort(vector<int>&arr,int left,int right){
    if(left<right){
        int pi=partition(arr,left,right); // will be getting the index of pivot elements here
        quicksort(arr,left,pi-1);
        quicksort(arr,pi+1,right);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Before sorting the arr : ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"After sorting the arr : ";

    quicksort(arr,0,n-1);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}