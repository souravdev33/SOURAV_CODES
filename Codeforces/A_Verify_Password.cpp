/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- Sourav Dev                               
-----------------------------------------------------------------------------------*/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using namespace std;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;
    while(tc--) {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        string str1=str;
        bool flag=true;

        sort(str.begin(),str.end());

        for (ll i=0;i<n;i++) {
            if(str1[i]>='a' && str1[i]<='z' && str1[i+1]>='0' && str1[i+1]<='9'){
                flag=false;
                break;
            }
        }

        if(flag==false) no
        else if(str==str1) yes
        else no
    
    }

return 0;
}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tc;
//     cin>>tc;

//     while(tc-->0){
//         int n;
//         cin>>n;
//         string str1,str2;
//         cin>>str1;
//         str2=str1;
//         sort(str1.begin(),str1.end());

//         if(str1==str2)cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;

//     }
// return 0;
// }