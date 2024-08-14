
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        if(str[0]=='a'){
            cout<<"YES\n";
        }
        else if(str[0]=='b' && str[2]=='c'){
            cout<<"YES\n";
        }
        else if(str[0]=='c' && str[1]=='b'){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
