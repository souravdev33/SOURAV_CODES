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
    cin>>tc;  

    while(tc--){
        int n,k;
        cin>>n>>k;  

        if(k==0){
            for (int i=1;i<=n;i++){
                cout<<"-1 ";
            }
            cout<<endl;
            continue;
        }

        int x=0;

    
        for (int i=1;i<=n;i++){
            if ((i*(i+1))/2<=k){
                x=i;
            } 
            else{
                break;
            }
        }

        int total_subarray=(x*(x+1))/2;
        int neg =k-total_subarray;

        for (int i=1;i<=n;i++){
            if (i==x+1){
                if (neg==0){
                    cout<<"-1000 ";
                } 
                else{
                    cout<< -(((x-neg+1)*2)-1)<<" ";
                }
            } 
            
            else if(i<=x){
                cout<<"2 ";
            } 
            
            else if(i>x+1){
                cout<<"-1000 ";
            }
        }
        cout<<endl;
    }

    return 0;
}
