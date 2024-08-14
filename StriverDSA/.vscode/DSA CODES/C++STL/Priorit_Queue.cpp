#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(14);
    pq.push(45);
    pq.push(59);
    pq.push(12);
    pq.pop();

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
} 