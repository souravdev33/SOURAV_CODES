// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int f(int num,int arr[]){
//     int count=0;
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]==num) count++;
//     }
//     return count;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//       int num;
//       cin>>num; 
    
//       int arr[]={1,2,1,3,2};
//       int ans=f(num,arr);
//       cout<<ans<<endl;
//     }
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //Precompute

    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;


    }
}