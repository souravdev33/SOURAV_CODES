#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
#define ll long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string str;
    cin>>str;

    bool flag=true;
    for(int i=0;i<=str.size();i++){
        while(i!=n/2){
            if(str[i]>str[n] and str[i+1]>str[n-1]){
                flag=false;
            }
            else if(str[n]>str[i] and str[n-1]>str[i+1]){
                flag=false;
            }
           
        }
    }
    if(flag){
        no;
    }
    else{
        yes;
    }

    return 0;
}