#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>li1={10,20,30,60,60,40};
    list<int>li2={100,200,300,500};
    list<int>::iterator it;
    // it=li.begin();
    // li1.swap(li2);
    li1.merge(li2);

    // li.push_back(10);
    // li.push_back(20);
    // li.push_back(30);
    // li.push_back(40);
    // li.push_back(50);
    // li.push_front(69);
    // li.pop_front();
    // li.pop_back();
    //  advance(it,2);
    // // li.insert(it,69);
    // li.erase(it);
    // li.remove(40);
    // li.sort();
    // li.unique(); 
    for(auto i:li1){
        cout<<i<<" ";
    }

} 