
#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define umap unordered_map
#define uset unordered_set
#define mk make_pair
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
using namespace std;

void boom(){
 
 ll n;
 cin>>n;
 vi arr(n);
 
 for(auto &val:arr) cin>>val;
 
 int x = 1;
 
 for(auto &val:arr){
   int y = __gcd(x,val);
   y = val/y;
   x*=y;
 }
 ll sum = 0;
 vi ans;
 for(auto &val:arr){
   sum+=x/val;
   ans.push_back(x/val);
 }
 
 if(sum>=x){
   cout<<-1<<endl;
 }
 else{
   for(auto &val:ans){
     cout<<val<<" ";
   }
   cout<<endl;
 }
 
  return;
}

int main() 
{
  ll tc;
  cin>>tc;
  while(tc--){
    boom();
  }
   
 return 0;
}
