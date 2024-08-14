#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
// int main()
// {
//     int n;
//     int count=0;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         if(n%i==0) count++;
//     }
//     if(count==2){
//         cout<<"Yes"<<endl;
//     }
//     else cout<<"NO"<<endl;
// }

int main(){
    int n;
    cin>>n;
    int count=0;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;

        if((n/i)!=i)
            count++;
        }
    }
    if(count==2)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
return 0;
}