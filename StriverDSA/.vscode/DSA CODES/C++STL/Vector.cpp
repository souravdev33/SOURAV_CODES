#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
      vector<int>v={2,34,546,3424,23};
      vector<int>::iterator it;
//    v.push_back(194);
//    v.push_back(20);
//    v.push_back(525);
//    v.push_back(68);
//    v.push_back(57);
// int n ;
// cin>>n;


    // for(int i=0;i<n;i++){
    //     int n;
    //     cin>>n;
    //     v.push_back(n);
    // }
 
   sort(v.begin(),v.end()); 
   reverse(v.begin(),v.end());
//    for( it=v.begin();it<v.end();it++){
//     cout<<*it<<endl;
//    }
for(auto it: v){
    cout<<it<<" ";

}
}