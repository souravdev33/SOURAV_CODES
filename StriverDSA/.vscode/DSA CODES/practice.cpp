#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// main(){
//    int x=10,y=40;
//    swap(x,y);
//    cout<<"After swapping :"<<"x"<<"="<<x<<" "<<"y"<<"="<<y<<endl; 
    
// }

// main(){
//     int n=5;
//     vector<int> arr={4,6,3,2,6};
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    int arr[]={34,5,45,43,87,45,45,35};
    vector<int>v={34,97,2324,56667,97,232344,455};

    // cout<<*min_element(arr,arr+6)<<endl;
    // cout<<*max_element(arr,arr+6)<<endl;

    // cout<<*min_element(v.begin(),v.end())<<endl;
    // cout<<*max_element(v.begin(),v.end())<<endl;

    // cout<<accumulate(arr,arr+6,0)<<endl;
    // cout<<accumulate(v.begin(),v.end(),0)<<endl;
    cout<<count(arr,arr+8,45)<<endl;
    cout<<count(v.begin(),v.end(),97)<<endl;
} 