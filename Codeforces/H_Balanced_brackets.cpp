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

    string str;
    cin>>str;
    stack<char>st;

    for (auto c : str) {
        if(c=='('){
            st.push(c);
        } 
        else if(c==')'){
            if (st.empty() || st.top()!='(') {
                no
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty()) yes
    else no

    return 0;
}
