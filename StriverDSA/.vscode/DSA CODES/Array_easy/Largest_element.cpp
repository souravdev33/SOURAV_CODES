#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int largestElement(vector<int> &arr, int n) {
   int largest=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>largest){
           largest=arr[i];
       }
   }
   return largest;
}
int main(){
    int n=8;
    vector<int>arr={3,7,2,8,9,35,79,24};
    cout<<largestElement(arr,n);
return 0;
}