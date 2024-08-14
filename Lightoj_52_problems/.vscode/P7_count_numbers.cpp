
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    char line[100000];
    scanf("%[^\n]",line);
    char *p,*e;
    long input;
    int count=0;
    p=line;

    for(p=line; ; p=e){
        input=strtol(p, &e, 10);
        if(p==e)break;
        count++;
    }
    cout<<count<<endl;
    }
   