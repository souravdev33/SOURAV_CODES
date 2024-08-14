#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int>li;
    for(int i=1;i<=sqrt(n);i++){  // for(int i=1;i*i<=n;i++)
        if(n%i==0)
            li.push_back(i);
        if(n/i!=i)
            li.push_back(n/i);
    }
    li.sort();

    for(auto i:li){
        cout<<i<<" ";
    }
return 0;

}



#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int>li;
    for(int i=1;i<=n;i++){
        if(n%i==0)cout<<i<<" ";

    }

}