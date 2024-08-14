// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<bits/stdc++.h>
// #define yes cout<<"Yes"<<endl;
// #define no cout<<"No"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin>>tc;
//     while(tc-->0){
//         ll n,k;
//         cin>>n>>k;
//         vector<ll>pf(k);
//         for(ll i=0;i<k;i++){
//             cin>>pf[i];
//         }             

//         vector<ll>v;
//         v.push_back(pf[0]);
//         for(ll i=1;i<k;i++){
//             v.push_back(pf[i]-pf[i-1]);
//         }

//         if (is_sorted(v.begin(),v.end())) yes
        
//         else no
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;
    while (tc-->0){
        ll n,k;
        cin>>n>>k;
        vector<ll>pf(k);
        for (int i=0;i<k;i++){
            cin>>pf[i];
        }
         if (k==1 or n==1){
            yes
            continue;
        }

        vector<ll>v(k-1);
        for(ll i=1;i<k;i++){
            v[i-1]=pf[i]-pf[i-1];
        }

        bool flag=true;

        if(is_sorted(v.begin(),v.end()))
             flag=true;
        else
             flag=false;

        
        if (flag){
            ll total_initial_sum=pf[0];
            ll available_elements=n-k+1;
            
            if(total_initial_sum > available_elements*v[0])
                flag = false;
        
        }

        if(flag) yes
        else no
    }

    return 0;
}
