#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;


    //Precompute
    int hash[256]={0};
    for(int i=0;i<str.size();i++){
        hash[str[i]]++;
    }

    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    
    }
return 0;
}