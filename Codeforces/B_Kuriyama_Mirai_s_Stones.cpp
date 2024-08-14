
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;

// const int n=1e5+10;
// vector<int>v1(n);

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         cin>>v1[i];
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int a,b,c;
//         cin>>a>>b>>c;

//         vector<int>v2={a,b,c};
//         sort(v2.begin(),v2.end());
//         int type=v2[0];
//         int l=v2[1];
//         int r=v2[2];

//         int sum=0;
//         if(type==1){
//             for(int i=l;i<=r;i++){
//                 sum+=v1[i];
//             }
//         }
//         else {
//             vector<int>v1_copy(v1.begin()+1,v1.begin()+n+1);
//             sort(v1_copy.begin(),v1_copy.end());
//             for (int i=l;i<=r;i++) {
//                 sum+=v1_copy[i-1];
//             }
//         }

//         cout<<sum<<endl;
//     }

//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;

const ll n=1e5+10;
ll v[n],pf1[n],pf2[n]; 

// Used prefix sum to solve this problem to optimize the time complexity.
//First one is also ok but it was taking much time.
//so used prefix sum and optimized the tc to o(1).

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }

    for(ll i=1;i<=n;i++){
        pf1[i]=pf1[i-1]+v[i];
    }
    sort(v+1,v+n+1);

    for(ll i=1;i<=n;i++){
        pf2[i]=pf2[i-1]+v[i];
    }

    ll q;
    cin>>q;
    while(q-->0){
        ll type,l,r;
        cin>>type>>l>>r;

        if(type==1){
            cout<<pf1[r]-pf1[l-1]<<endl;
        }
        else if(type!=1){
            cout<<pf2[r]-pf2[l-1]<<endl;
        }
        
    }
    return 0;
}