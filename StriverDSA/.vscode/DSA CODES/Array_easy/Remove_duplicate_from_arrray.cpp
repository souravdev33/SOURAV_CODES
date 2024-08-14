#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,5,1,2,3,4,5,6,7,8,5,4,2};
    set<int>s;
    for(int i=0;i<15;i++){
        s.insert(arr[i]);
    }
    for(auto it : s){
        cout<<it<<" ";
    }

}