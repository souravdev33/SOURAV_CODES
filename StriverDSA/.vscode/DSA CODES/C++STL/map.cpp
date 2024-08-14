#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void map1(){
    map<string,int>m;
    map<string,int>::iterator i;
    m["Sourav"]=1;
    m["Bidhan"]=5;
    m["Tanmoy"]=4;
    m["Aritra"]=2;

    for(i=m.begin();i!=m.end();++i){
        cout<<i->first<<" "<<i->second<<endl;
    }
}

void map2(){
    map<int ,string>m;
    map<int ,string>::iterator i;

    m.insert({1,"Sourav"});
    m.insert({3,"Bidhan"});
    m.insert({2,"Aritra"});
    m.insert({4,"Rishad"});

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

main()
{
    map1();
}