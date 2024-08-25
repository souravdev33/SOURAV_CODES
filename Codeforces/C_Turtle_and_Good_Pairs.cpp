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
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        
        unordered_map<char, int> freq;
        for (auto c : str) {
            freq[c]++;
        }
        
        string str2;
        str2.resize(n);
        for(int i=0;i<n;i++){
            str2[i]='#';
        }
        int index = 0;

        while (1) {
            bool flag = 0;
            for (auto &[ch, count] : freq) {
                if (count > 0) {
                    str2[index] = ch;
                    index++;
                    count--;
                    flag=1;
                }
            }
            if (!flag) {
                break;
            }
        }

        cout << str2 << endl;
    }
    return 0;
}
