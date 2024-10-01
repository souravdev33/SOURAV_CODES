#include <iostream>
#include <bits/stdc++.h>
#include <regex>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void dev(){
    
    string str;
    cin >> str;

    regex find("it");

    if (regex_search(str, find)){
        yes
    }
    else{
        no
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++){
        dev();
    }

    return 0;
}
