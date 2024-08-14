#include <iostream>
#include <vector>
#include <algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define MOD 1000000007
using ll = long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin>>tc;
    while(tc-->0){
        vector<int>v(3);

        for(int i=0;i<3;i++){
            cin >>v[i];
        }
        sort(v.begin(), v.end());


        for(int i=0;i<5;i++){
            if(v[0]<=v[1] and v[0]<=v[2]){
                v[0]++;
            } 
            else if(v[1]<=v[0] and v[1]<=v[2]){
                v[1]++;
            } 
            else{
                v[2]++;
            }
        }

        cout<<v[0]*v[1]*v[2]<<endl;
    }
return 0;
}
