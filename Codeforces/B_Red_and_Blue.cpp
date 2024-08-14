// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;
// const int n=1e5+10;
// int r[n],b[n],pf_r[n],pf_b[n];

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin>>tc;
//     while(tc-->0){
//         int n,m;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>r[i];
//             pf_r[i]=pf_r[i-1]+r[i];
//         }
//         cin>>m;
//         for(int i=1;i<=m;i++){
//             cin>>b[i];
//             pf_b[i]=pf_b[i-1]+b[i];
//         }
      

//         auto max1=max_element(pf_r+1,pf_r+n+1);
//         auto max2=max_element(pf_b+1,pf_b+m+1);

//         cout<<*max1+*max2<<endl;

                      
//     }
//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll = long long;
using namespace std;
const int n=1e5+10;
int r[n],b[n],pf_r[n],pf_b[n];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;
    while(tc-->0){
        int n,m;
        cin>>n;

        pf_r[0]=0;

        for(int i=1;i<=n;i++) {
            cin>>r[i];
            pf_r[i]=pf_r[i-1]+r[i];
        }

        cin >> m;

        pf_b[0]=0;

        for(int i=1;i<=m;i++){
            cin>>b[i];
            pf_b[i]=pf_b[i-1]+b[i];
        }

    
        int max_r=*max_element(pf_r,pf_r+n+1);
        int max_b=*max_element(pf_b,pf_b+m+1);

        cout<<max_r+max_b<<endl;
    }
    return 0;
}


// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll = long long;
// using namespace std;
// const int n = 1e5 + 10;
// int r[n], b[n], pf_r[n], pf_b[n];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin >> tc;
//     while(tc-- > 0) {
//         int n, m;
//         cin >> n;

//         // Initialize prefix sums
//         pf_r[0] = 0;
//         for(int i = 1; i <= n; i++) {
//             cin >> r[i];
//             pf_r[i] = pf_r[i - 1] + r[i];
//         }

//         cin >> m;

//         // Initialize prefix sums
//         pf_b[0] = 0;
//         for(int i = 1; i <= m; i++) {
//             cin >> b[i];
//             pf_b[i] = pf_b[i - 1] + b[i];
//         }

//         // Find maximum prefix sums
//         int max_r = *max_element(pf_r, pf_r + n + 1); // Include pf_r[0]
//         int max_b = *max_element(pf_b, pf_b + m + 1); // Include pf_b[0]

//         // Output the result
//         cout << max(max_r, 0) + max(max_b, 0) << endl;
//     }
//     return 0;
// }
