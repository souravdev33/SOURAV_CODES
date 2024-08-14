#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main() {
    ll tc; 
    cin >> tc;
    while (tc--) {
        ll n, fact = 1, count = 0; 
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            fact *= i;
        }
        string str = to_string(fact);
        cout<<str<<endl;
        for (ll i = str.size(); i>=0; i--) {
            if (str[i] == '0') count++;
            if(str[i]!='0') break; 
        }
        cout << count << endl;
      
    }
    return 0;
}