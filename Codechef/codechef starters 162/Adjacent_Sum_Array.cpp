#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << " = " << (x) << endl;
using ll = long long;
using namespace std;

void sourav() {
    int n;
    cin>>n;
    vector<int>arr(n-1);

    for(auto &i : arr)cin>>i;
    sort(arr.begin(),arr.end());
    vector<int>res(n);

    res[0]=arr[0]/2;
    res[1]=arr[0]-res[0];
    
    for(int i=2;i<n;i++){
        res[i]=arr[i-1]-res[i-1];
    }
    for(auto & i : res){
        cout<<i<<" ";
    }
    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    clock_t start = clock();

    int _ = 1;
    cin >> _;

    for (int i = 1; i <= _; i++) {
        // cout << "Case #" << i << ": ";
        sourav();
    }

    // sourav();
    cerr << "Time elapsed: " << clock() - start << "ms!\n";

    return 0;
}