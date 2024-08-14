
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

        int n;
        cin>>n;
        set<pair<string,string>>s;
        
        for (int i=0;i<n;i++) {
            string species,colour;
            cin>>species>>colour;
            s.insert({species,colour});
        }

        cout<<s.size()<<endl;
        
    return 0;
    }
