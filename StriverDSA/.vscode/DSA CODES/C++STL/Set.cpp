#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   set<int>s;
   set<int>:: iterator it;

   s.insert(10);
   s.insert(54);
   s.insert(63);
   s.insert(5);
   s.insert(89);
it=s.find(10);
    for(it=s.find(10); it!=s.end();it++){
     cout<<*it<<" ";
    }

// if(it!=s.end()){
//     cout<<"Value found"<<endl;
// }
// else cout<<"NOt FOund"<<endl;
}