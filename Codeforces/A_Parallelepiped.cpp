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

    int a,b,c;
    cin>>a>>b>>c;

    double x=sqrt((a*c)/b);
    double y=sqrt((b*c)/a);
    double z=sqrt((a*b)/c);

    int result=int(4*(x+y+z));
    cout<<result<<endl;
}