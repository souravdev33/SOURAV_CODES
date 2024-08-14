
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc; 

    for (int i = 0; i < tc; i++) {
        int n;
        cin >> n;

        int a = n / 10;   
        int b = n % 10;   
        

        cout << a+b << endl; 
    }

    return 0;
}
