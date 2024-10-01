#include<iostream>
#include<bits/stdc++.h>

using namespace std;

        const int N=sqrt(1e9);
        vector<bool> isPrime(N, 1);
        // vector<int> lp(1e5+10),hp(1e5+10);
        vector<int>V;
        void seive()
        {
            isPrime[0] = isPrime[1] = 0;
            for (int i = 2; i <= N; i++)
            {
                
                if (isPrime[i])
                {
                        V.push_back(i);
                    //lp[i]=hp[i]=i;
                    for (int j = 2 * i; j <= N; j += i)
                    {	
                        //hp[j]=i;
                                // if(isPrime[j]==1){
                                //       lp[j]=i;
                                // }
                        isPrime[j] = 0;
                    }
                }
            }
        }

void STR(){
    int n;cin>>n;
    deque<int> dq;
    vector<int>v;
    int ct = 0;
    for(int i = 1;i<=n;i++){
        if(isPrime[i] && i!=n){
            v.push_back(i);
        }else{
            if(ct%2)dq.push_back(i);
            else dq.push_front(i);
            ct++;
        }
    }
    // reverse(v.begin(),v.end());
    
    while(v.size()){
        if(ct%2)dq.push_back(v.back());
        else dq.push_front(v.back());
        // cout<<v.back()<<endl;
        v.pop_back();
        ct++;
    }
    
    for(auto it:dq)cout<<it<<' ';
    cout<<endl;
}
        
        signed main(){
            seive();
            int t=1;
            int temp=1;
            cin>>t;
            // 
            while(t--){
                // cout<<"Case #"<<temp<<": ";
                // cout<<"Case "<<temp<<": ";
                temp++;
                STR();
            }
        }