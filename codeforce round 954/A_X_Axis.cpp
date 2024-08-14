

// /*---------------------------------------------------------------------------------
//                                     ॐ हरे कृष्णा ॐ                                  
//                                 Author :- Sourav Dev                               
// -----------------------------------------------------------------------------------*/

// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <iomanip>
// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define MOD 1000000007
// using namespace std;


// int main() {
    
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll tc;
//     cin>>tc;
//     while(tc--) {
//         ll x1,x2,x3;
//         cin>>x1>>x2>>x3;

//         vector<int>v;
//         v.push_back(x1);
//         v.push_back(x2);
//         v.push_back(x3);
        
//         sort(v.begin(), v.end()); 

//         ll ans=abs(x1-v[1])+abs(x2-v[1])+abs(x3-v[1]);

//         cout<<ans<<endl;
//     }
//     return 0;
// }


/*---------------------------------------------------------------------------------
                                    ॐ हरे कृष्णा ॐ                                  
                                Author :- John Doe                                 
-----------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int32_t main() {
    
    fast_io;

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        vector<int> numbers;
        numbers.push_back(num1);
        numbers.push_back(num2);
        numbers.push_back(num3);
        
        sort(numbers.begin(), numbers.end()); 

        int result = abs(num1 - numbers[1]) + abs(num2 - numbers[1]) + abs(num3 - numbers[1]);

        cout << result << endl;
    }

    return 0;
}
