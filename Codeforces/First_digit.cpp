#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll= long long;
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>> str;

    reverse(str.begin(),str.end());

    int n=str.size();
    int num=str[n];

    cout<<num<<endl;
    // if(n&1){
    //     cout<<"EVEN"<<endl;
    // }
    // else{
    //     cout<<"ODD"<<endl;
    // }


    // return 0;
}