// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define MOD 1000000007
// using ll=long long;
// using namespace std;



// int main() {
//      ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tc;
//     cin >> tc;

//     while (tc--) {
//         ll a1, a2, b1, b2,count=0;
//         cin >> a1 >> a2 >> b1 >> b2; 

//         // total 4 ta scenario
//         // S1
//         ll round= 0;
//         if (a1 > b1) 
//             round++;
//         if (a2 > b2) 
//             round++;
//         if (round> 1) 
//             count++;

//         // S2
//         round = 0;
//         if (a1 > b2) 
//             round++;
//         if (a2 > b1) 
//             round++;
//         if (round > 1) 
//             count++;

//         // S3
//         round = 0;
//         if (a2 > b1) 
//             round++;
//         if (a1 > b2) 
//             round++;
//         if (round > 1)
//             count++;

//         // S4
//         round = 0;
//         if (a2 > b2) 
//             round++;
//         if (a1 > b1) 
//             round++;
//         if (round > 1) 
//             count++;

//      cout <<count<< endl; 

//     }
// return 0;
// }




#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll=long long;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--){
        vector<int>a(2),b(2);
    
        for(int &i : a) cin>>i;   
        for(int &i : b) cin>>i;

        int count = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                
                int cnt1 = 0, cnt2 = 0;

                if (a[i] > b[j])
                    cnt1++;
                else if (a[i] < b[j])
                    cnt2++;
                if (a[1 - i] > b[1 - j]) 
                    cnt1++;
                else if (a[1 - i] < b[1 - j])
                    cnt2++;

                if (cnt1 > cnt2) count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}