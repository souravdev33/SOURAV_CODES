// 



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;


// void merge(vector<int>&arr,int low,int mid,int high){
//     vector<int>temp;
//     int left=low;
//     int right=mid+1;

//     while(left<=mid and right<=high){
//         if(arr[left]<=arr[high]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }

//     }

//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }

// void merge_sort(vector<int>&arr,int low,int high){
//     if(low>=high) return ;

//     int mid=(low+high)/2;

//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }



// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     merge_sort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int left,int right){
    int pivot=arr[right];
    int i=left-1;

    for(int j=left;j<=right;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,right);
    return i+1;
}

void quicksort(int arr[],int left, int right){
    if(left<right){
        int pi=partition(arr,left,right);
        quicksort(arr,left,pi-1);
        quicksort(arr,pi+1,right);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}