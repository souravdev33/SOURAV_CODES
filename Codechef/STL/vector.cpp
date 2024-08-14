#include <bits/stdc++.h>
using namespace std;

int main() {
	   int tc;
	   cin>>tc;
	   while(tc--){
	       int n;
           cin>>n;
	       vector<int>v(n);
	       
	       for(int i=0;i<n;i++){
	           cin>>v.at(i);
	       }
	       
	       for(int i=0;i<n;i++){
	           if(n%3==0 && n%2!=0){
	               cout<<v[n/2]<<endl;
                   break;
	           }
               else if(n%3==0 && n%2==0){
                    cout<<v[0]<<" "<<v[n-1]<<endl;
                    break;
               }
               else{
                   cout<<v[0]+v[n-1]<<endl;
                   break;
               }
	       }
	   }
return 0;

}
